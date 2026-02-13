#include <stdio.h>
#include <stdlib.h>

long long fact(int n, long long accumulator) {
    if (n <= 1) {
        return accumulator;
    } else {
        return fact(n - 1, (long long)n * accumulator);
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2)
        return 1;

    int n = atoi(argv[1]);
    printf("Factorial: %lld\n", fact(n, 1LL));

    return 0;
}
