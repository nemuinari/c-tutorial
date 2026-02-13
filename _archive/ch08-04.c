#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* sort by qsort
int compare(const void* p0, const void* p1) {
    return (*(int32_t*)p0 - *(int32_t*)p1);
}
*/

int32_t i_add(int32_t x, int32_t y, int32_t z) {
    return x + y + z;
}
double d_add(double x, double y) {
    return x + y;
}
char* select(char* a, char* b, char* c) {
    return c;
}

int main(int argc, char* argv[]) {
    {
        int32_t a = 10;
        int32_t b = 20;
        int32_t c = 30;

        int (*calc)(int32_t, int32_t, int32_t) = i_add;
        int result = calc(a, b, c);
        printf("Result: %d\n", result);
    }
    {
        double a = 5.5;
        double b = 4.5;

        double (*calc)(double, double) = d_add;
        double result = calc(a, b);
        printf("Result: %.2f\n", result);
    }
    {
        char a[] = "Apple";
        char b[] = "Banana";
        char c[] = "Cherry";

        char* (*select_str)(char*, char*, char*) = select;
        char* result = select_str(a, b, c);
        printf("Selected: %s\n", result);
    }
    {
        if (argc > 1) {
            for (int i = 1; i < argc; i++) {
                printf("Argument %d: %s\n", i, argv[i]);
            }
        } else {
            printf("No arguments provided.\n");
        }
    }
    {
        int x[] = {1, 2, 3, 4, 5};
        int* p = x;
        printf("value: %d\n", p[2]);  // 3
    }

    /* test add function
    int32_t array[] = {32, 18, 97, 5, -43, 76, 12, 0, -15};
    qsort(array, sizeof(array) / sizeof array[0], sizeof(int32_t), compare);
    for (size_t i = 0; i < sizeof(array) / sizeof array[0]; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    */
    return 0;
}
