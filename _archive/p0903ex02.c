#include <stdio.h>
#include <stdlib.h>

int add(char* a, char* b) {
    int num1 = atoi(a);
    int num2 = atoi(b);
    return num1 + num2;
}

int main(int argc, char** argv) {
    if (argc != 3) {
        puts("usage: main.exe number number");
        return 1;
    }
    printf("%d\n", add(argv[1], argv[2]));

    return 0;
}
