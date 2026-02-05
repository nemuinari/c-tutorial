#include <stdio.h>

int main(void) {
    int value[10];

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            value[i] = i * 2;
        } else {
            value[i] = i * 100;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", value[i]);
    }
    printf("\n");

    return 0;
}
