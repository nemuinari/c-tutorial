#include <stdio.h>

static int ex1(int x, int y) {
    printf("ch09-04.c ex1: %d\n", x + y);
    return x + y;
}

extern int ex2(int x, int y) {
    printf("ex2: %d\n", x * y);
    return ex1(x, y);
}
