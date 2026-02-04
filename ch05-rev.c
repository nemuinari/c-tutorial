#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Hello!!\n");
    } else {
        printf("%d\n", atoi(argv[1]));
    }
    return 0;
}
