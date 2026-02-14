// struct type definition
#include <stdio.h>

typedef struct {
    int x;
    int y;
} POINT;

POINT move_to(POINT p, int x, int y) {
    p.x += x;
    p.y += y;

    return p;
}

int main() {
    POINT p = {1, 2};
    printf("Before move: (%d, %d)\n", p.x, p.y);
    POINT np = move_to(p, 3, 4);
    printf("After move: (%d, %d)\n", np.x, np.y);
    printf("Original point still: (%d, %d)\n", p.x, p.y);

    return 0;
}
