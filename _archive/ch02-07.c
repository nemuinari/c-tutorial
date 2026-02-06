#include <stdio.h>

int always10() {
    int val = 10;
    return val;
}

int main(void) {
    int result = always10();

    printf("The function always10 returned: %d\n", result);
    return 0;
}
