#include <stdio.h>

int div(int a, int b, int* rem) {
    *rem = a % b;
    return a / b;
}

int main() {
    int rem;
    int q = div(13, 4, &rem);

    printf("13 / 4 = %d ... %d\n", q, rem);

    return 0;
}
