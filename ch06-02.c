#include <stdio.h>

int main(void) {
    int n = 0;
    do {
        n += 1;
    } while (++n <= 0);
    printf("%i\n", n);  // Output: 2

    return 0;
}
