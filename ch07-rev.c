#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int n = 0;
    while (true) {
        if (n < 10) {
            printf("%d\n", n + 1);
            n++;
        } else {
            break;
        }
    }
    return 0;
}
