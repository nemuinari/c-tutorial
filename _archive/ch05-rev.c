#include <stdio.h>

int main(void) {
    int x[] = {10, 20, 30, 40, 50};
    int n = sizeof(x) / sizeof(x[0]);

    for (int i = 0; i < n; i++) {
        printf("%d\n", x[i]);
        if (x[i] == 40) {
            printf("break\n");
            break;
        }
    }
}
