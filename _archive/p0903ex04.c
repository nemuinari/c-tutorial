#include <stdarg.h>
#include <stdio.h>

int x(int* np, ...) {
    va_list ap;
    va_start(ap, np);
    for (int i = 0;; i++) {
        int* p = va_arg(ap, int*);
        if (!p) {
            break;
        }
        *p = i;
    }
    va_end(ap);
    return 0;
}

int main() {
    int a, b, c;
    x(&a, &b, &c, NULL);
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
