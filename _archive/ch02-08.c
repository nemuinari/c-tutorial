#include <stdio.h>

int func(void) {
    return 1;
}

int func2(int x, int y, int z) {
    return x + y + z;
}

int one(void) {
    int i = func();
    return func2(i, i, i);
}

int main(void) {
    int result = one();
    printf("The result is: %d\n", result);

    return 0;
}
