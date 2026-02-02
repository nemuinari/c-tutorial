#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool b = true;

    printf("%d\n", b);      // 1
    printf("%d\n", false);  // 0

    _Bool bb = 1234500000000LL;
    printf("%d\n", bb);  // 1

    return 0;
}
