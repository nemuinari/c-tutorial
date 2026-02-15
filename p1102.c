#include <stdio.h>

typedef struct {
    int x;
    int y;
} X;

X create_X(int x, int y) {
    X new_x;
    new_x.x = x;
    new_x.y = y;
    return new_x;
}

#define MAX_XS 8

int main() {
    X xs[MAX_XS];

    for (int i = 0; i < MAX_XS; i++) {
        xs[i] = create_X(i, i * 2);
    }

    for (int i = 0; i < MAX_XS; i++) {
        printf("X%d: (%d, %d)\n", i, xs[i].x, xs[i].y);
    }

    return 0;
}
