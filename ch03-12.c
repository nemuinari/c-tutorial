#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#define MUL(x, y) atoi(x) * atoi(y)

int main(int argc, char* argv[]) {
    printf("value: %lld\n", (long long)INT_MAX * INT_MAX);

    char buf[10];
    sprintf(buf, "%d", 8 - 5);

    printf("MUL: %d\n", MUL(argv[1], argv[2]));
    printf("MUL: %d\n", MUL(argv[1], buf));

    return 0;
}
