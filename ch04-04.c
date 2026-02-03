#include <stdio.h>

int main(int argc, char* argv[]) {
    if (argc - 1 > 5) {
        puts("argc > 5");
    } else if (argc - 1 == 1) {
        puts("argc ==  1");
    } else if (argc - 1 == 2) {
        puts("argc == 2");
    } else {
        puts("not match");
    }

    return 0;
}
