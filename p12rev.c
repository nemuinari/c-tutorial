#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int argc;
    char** argv;
} ARG;

void print_arg(ARG* arg) {
    for (int i = 1; i < arg->argc; i++) {
        printf("%s\n", arg->argv[i]);
    }
}

int main(int argc, char* argv[]) {
    ARG* pa;
    pa = (ARG*)malloc(sizeof(ARG));

    if (pa == NULL)
        return 1;

    pa->argc = argc;
    pa->argv = argv;

    print_arg(pa);

    free(pa);
    return 0;
}
