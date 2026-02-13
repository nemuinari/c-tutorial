#include <stdio.h>

extern int ex2(int x, int y);

extern int ex1(int x, int y) {
    printf("ex1: %d\n", x + y);
    return x + y;
}

int main() {
    ex2(5, 6);
}
