#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc - 3) {
        puts("not two");
    } else {
        puts("two");
    }

    return 0;
}
