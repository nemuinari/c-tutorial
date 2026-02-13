// pointer
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int32_t var = 100;
    int32_t* var_ptr = &var;

    printf("Value of var: %d, Value of var_ptr: %d\n", var, *var_ptr);

    *var_ptr = 150;
    printf("After value of var_ptr: %d, Value of var: %d\n", *var_ptr, var);

    // practice question
    int16_t x = 200;
    int16_t* y_ptr = &x;
    printf("Value of x: %d, Value of y_ptr: %d\n", x, *y_ptr);

    char ch;
    char* chp = &ch;
    *chp = 'A';
    printf("Value of ch: %c, Value of chp: %c\n", ch, *chp);

    int32_t n;
    int32_t* np = &n;
    *np = 128;
    printf("Value of n: %d, Value of np: %d\n", n, *np);

    int32_t aa = 38;
    int32_t bb = 42;
    int32_t* p1 = &aa;
    *p1 += 2;
    int32_t* p2 = &bb;
    *p2 -= *p1;
    (*p2)++;
    printf("Value of aa: %d, Value of bb: %d\n", aa, bb);

    int32_t xx = 8;
    printf("%d\n", *&xx);

    return 0;
}
