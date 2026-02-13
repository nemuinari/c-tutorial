#include <stdio.h>

// f is true
const int* add(const int* x, const int* y) {
    *(int*)x += *y;
    return x;
}

int main() {
    int a = 3;
    int b = 5;
    printf("3 + 5 = %d\n", *add(&a, &b));

    return 0;
}

/* e is false
int* add(int* x, int* y) {
    int ret = *x + *y;
    return &ret;
}

int main() {
    int a = 3;
    int b = 5;
    printf("3 + 5 = %d\n", *add(&a, &b));
}
*/

/* d is true
int* add(int* x, int* y) {
    *x += *y;
    return x;
}

int main() {
    int a = 3;
    int b = 5;
    printf("3 + 5 = %d\n", *add(&a, &b));

    return 0;
}
*/

/* c
int add(int* x, int* y) {
    return *x + *y;
}

int main() {
    int a = 3;
    int b = 5;
    printf("3 + 5 = %d\n", add(&a, &b));

    return 0;
}
*/

/* b is true
int add(int x, int y) {
    int* px = &x;
    int* py = &y;
    return *px + *py;
}

int main() {
    printf("3 + 5 = %d\n", add(3, 5));

    return 0;
}
*/

/* a is true
int add(int x, int y) {
    return x + y;
}

int main() {
    printf("3 + 5 = %d\n", add(3, 5));

    return 0;
}
*/
