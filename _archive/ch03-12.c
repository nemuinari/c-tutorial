#include <stdio.h>
#include <stdlib.h>

#define RESULT(op) printf(#op ": %i\n", (x)op(y))

int main(int argc, char* argv[]) {
    int x, y;
    x = atoi(argv[1]);
    y = atoi(argv[2]);

    RESULT(+);
    RESULT(-);
    RESULT(*);
    RESULT(/);

    return 0;
}
