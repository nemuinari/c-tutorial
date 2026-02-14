#include <stdio.h>

int main() {
    printf("1: %.1f\n", 1.001);
    printf("2: %04d\n", 32);
    printf("3: %.3s\n", "abcdef");
    printf("4: %07.2f\n", 48.0);
    printf("5: %#x\n", 32);

    return 0;
}
