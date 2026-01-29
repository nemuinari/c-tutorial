#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b) {
    return a + b;
}

int main(int argc, char* argv[]) {
    int x, y;

    if (argc != 1) {
        x = atoi(argv[1]);
        y = atoi(argv[2]);

        int result = sum(x, y);
        printf("The sum of %d and %d is: %d\n", x, y, result);
    } else {
        printf("Please provide two integers as arguments.\n");
    }
    return 0;
}
