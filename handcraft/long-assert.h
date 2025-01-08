#ifndef FUZZ_H
#define FUZZ_H

#define ASSERT_XY_HELPER(x, y, N) \
    do { \
        if (N == 5) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5); } \
        if (N == 6) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6); } \
        if (N == 7) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7); } \
        if (N == 8) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8); } \
        if (N == 9) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9); } \
        if (N == 10) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10); } \
        if (N == 11) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11); } \
        if (N == 12) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12); } \
        if (N == 13) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13); } \
        if (N == 14) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14); } \
        if (N == 15) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15); } \
        if (N == 16) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16); } \
        if (N == 17) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17); } \
        if (N == 18) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18); } \
        if (N == 19) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19); } \
        if (N == 20) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20); } \
        if (N == 21) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21); } \
        if (N == 22) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22); } \
        if (N == 23) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23); } \
        if (N == 24) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23 || (y) != 24); } \
        if (N == 25) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23 || (y) != 24 || (y) != 25); } \
        if (N == 26) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23 || (y) != 24 || (y) != 25 || (y) != 26); } \
        if (N == 27) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23 || (y) != 24 || (y) != 25 || (y) != 26 || (y) != 27); } \
        if (N == 28) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23 || (y) != 24 || (y) != 25 || (y) != 26 || (y) != 27 || (y) != 28); } \
        if (N == 29) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23 || (y) != 24 || (y) != 25 || (y) != 26 || (y) != 27 || (y) != 28 || (y) != 29); } \
        if (N == 30) { assert((x) != 0 || (y) != 1 || (y) != 2 || (y) != 3 || (y) != 4 || (y) != 5 || (y) != 6 || (y) != 7 || (y) != 8 || (y) != 9 || (y) != 10 || (y) != 11 || (y) != 12 || (y) != 13 || (y) != 14 || (y) != 15 || (y) != 16 || (y) != 17 || (y) != 18 || (y) != 19 || (y) != 20 || (y) != 21 || (y) != 22 || (y) != 23 || (y) != 24 || (y) != 25 || (y) != 26 || (y) != 27 || (y) != 28 || (y) != 29 || (y) != 30); } \
    } while (0)

#endif // FUZZ_H