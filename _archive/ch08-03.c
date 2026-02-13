#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int32_t array[] = {1, 2, 3, 4};
    int32_t* p = array;
    for (size_t i = 0; i < sizeof array / sizeof(int32_t); i++) {
        printf("array[%zu] = %d\n", i, p[i]);  // same as *(p + i)
    }

    int32_t a[] = {0, 1, 2, 3, 4, 5};
    for (size_t i = 0; i < sizeof a / sizeof(int32_t); i++) {
        printf("a[%zu] = %d\n", i, a[i]);
    }

    return 0;
}
