#include <stdio.h>
#include <stdlib.h>

int func_sum(int x, int y) {
    return x + y;
}

int func_diff(int x, int y) {
    return x - y;
}

int func_prod(int x, int y) {
    return x * y;
}

int func_quot(int x, int y) {
    return x / y;
}

int main(int argc, char* argv[]) {
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int sum, diff, prod, quot;

    sum = func_sum(x, y);
    diff = func_diff(x, y);
    prod = func_prod(x, y);
    quot = func_quot(x, y);

    printf("Sum: %d\nDiff: %d\nProd: %d\nQuot: %d\n", sum, diff, prod, quot);

    return 0;
}
