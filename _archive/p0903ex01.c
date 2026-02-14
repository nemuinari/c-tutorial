#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 8;
    int y = 18;
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
