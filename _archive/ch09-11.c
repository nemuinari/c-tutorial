#include <stdio.h>
#include <string.h>

int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}

typedef int (*CALCFUN)(int, int);

CALCFUN select_func(const char* name) {
    if (strcmp(name, "add") == 0) {
        return add;
    } else if (strcmp(name, "sub") == 0) {
        return sub;
    } else {
        return NULL;
    }
}

int main() {
    printf("Select function (add): %d\n", select_func("add")(3, 5));
    printf("Select function (sub): %d\n", select_func("sub")(10, 4));

    return 0;
}
