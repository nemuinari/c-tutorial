#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool even(int n) {
    return (n % 2) == 0 ? 1 : 0;
}

int main(int argc, char* argv[]) {
    int num = atoi(argv[1]);

    if (even(num)) {
        printf("%d is true\n", num);
    } else {
        printf("%d is false\n", num);
    }

    return 0;
}
