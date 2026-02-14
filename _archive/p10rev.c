#include <stdio.h>
#include <stdlib.h>

int print_count() {
    static int count = 0;
    count++;
    printf("%d\n", count);
    return count;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        return 1;
    }
    for (int i = 0; i < atoi(argv[1]); i++) {
        print_count();
    }
    return 0;
}
