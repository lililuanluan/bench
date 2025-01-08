#!/bin/bash

TOOL=../../genmc

# $TOOL --fuzz --fuzz-max=10 --dump-coverage=rand10 --mutation-policy=no-mutation --disable-estimation --count-distinct-execs --disable-race-detection --is-interesting=new  --use-queue  -- --std=c++11 -DIRIS_CACHELINE_SIZE=64   -DITERATIONS=1e7  test_lfringbuffer.cpp # 

# $TOOL  --fuzz --fuzz-max=100 --dump-coverage=rand10 --mutation-policy=no-mutation --disable-estimation --count-distinct-execs --disable-race-detection --is-interesting=new  --use-queue -- --std=c++11 -DIRIS_CACHELINE_SIZE=64   -DITERATIONS=1e7  test_lfringbuffer.cpp # 


$TOOL --fuzz --fuzz-max=100 --dump-coverage=rand10 --mutation-policy=no-mutation --disable-estimation --count-distinct-execs --disable-race-detection --is-interesting=new  --use-queue -- --std=c++11 -DIRIS_CACHELINE_SIZE=64   -DITERATIONS=1e7  test_lfringbuffer.cpp # 

$TOOL --fuzz --fuzz-max=200 --disable-estimation --count-distinct-execs --disable-race-detection --is-interesting=new  --use-queue -- --std=c++11 -DIRIS_CACHELINE_SIZE=64 -DSPINLOOP_ASSUME  -DITERATIONS=1e7  test_lfringbuffer.cpp # 