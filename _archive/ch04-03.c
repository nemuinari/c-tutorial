#include <limits.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int n = -1;
    int un = UINT_MAX;
    unsigned int u = UINT_MAX;

    if (n + 1) {
        puts("n: true");
    }

    if (un + 1) {
        puts("nu: true");
    }

    if (u + 1) {
        puts("u: true");
    }

    if (argc - 3) {
        puts("Hello");  // ./main 1 2
    }

    return 0;
}
