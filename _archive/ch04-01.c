#include <stdio.h>

int func(int x, int y) {
    return x + y;
}

int main(void) {
    puts("C is nice!");
    printf("Sum: %d\n", func(3, 4));
    printf("Sum; %d\n", func(5, func(1, 2)));
    printf("Sum: %d\n", func(func(2, 3), func(4, 5)));

    return 0;
}
