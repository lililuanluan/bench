#include <stdlib.h>
#include "queue.h"
#include "../helper.h"

typedef struct node {
	unsigned int value;
	_Atomic(struct node *) next;
} node_t;

typedef struct queue {
	_Atomic(node_t *) head;
	_Atomic(node_t *) tail;
} queue_t;

__VERIFIER_hp_t *get_free_hp();

static node_t *new_node()
{
	return malloc(sizeof(node_t));
}

static void reclaim(node_t *node)
{
	__VERIFIER_hp_retire(node);
}

void init_queue(queue_t *q, int num_threads)
{
	node_t *dummy = new_node();
	atomic_init(&dummy->next, NULL);
	atomic_init(&q->head, dummy);
	atomic_init(&q->tail, dummy);
}

void enqueue(queue_t *q, unsigned int val)
{
	node_t *tail, *next;

	node_t *node = new_node();
	node->value = val;
	node->next = NULL;

	__VERIFIER_hp_t *hp = get_free_hp();
	while (true) {
		tail = __VERIFIER_hp_protect(hp, &q->tail);
		next = atomic_load_explicit(&tail->next, acquire);
		if (tail != atomic_load_explicit(&q->tail, acquire))
			continue;

		if (next == NULL) {
			if (__VERIFIER_final_CAS(
				    atomic_compare_exchange_strong_explicit(&tail->next, &next,
									    node, release, release)))
				break;
		} else {
			__VERIFIER_helping_CAS(
				atomic_compare_exchange_strong_explicit(&q->tail, &tail, next,
									release, release);
			);
		}
	}
	__VERIFIER_helped_CAS(
		atomic_compare_exchange_strong_explicit(&q->tail, &tail, node, release, release);
	);
}

bool dequeue(queue_t *q, unsigned int *retVal)
{
	node_t *head, *tail, *next;
	unsigned ret;

	__VERIFIER_hp_t *hp_head = get_free_hp();
	__VERIFIER_hp_t *hp_next = get_free_hp();
	while (true) {
		head = __VERIFIER_hp_protect(hp_head, &q->head);
		tail = atomic_load_explicit(&q->tail, acquire);
		next = __VERIFIER_hp_protect(hp_next, &head->next);
		if (atomic_load_explicit(&q->head, acquire) != head)
			continue;
		if (head == tail) {
			if (next == NULL)
				return false;
			__VERIFIER_helping_CAS(
				atomic_compare_exchange_strong_explicit(&q->tail, &tail, next,
									release, release);
			);
		} else {
			ret = next->value;
			if (atomic_compare_exchange_strong_explicit(&q->head, &head, next,
								    release, release))
				break;
		}
	}
	*retVal = ret;
	reclaim(head);
	return true;
}
