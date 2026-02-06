#include <stdio.h>

void forloop() {
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1);
    }
    printf("\n");
}

void whileloop() {
    int i = 0;
    while (i < 10) {
        printf("%d ", i + 1);
        i++;
    }
    printf("\n");
}

void dowhileloop() {
    int i = 0;
    do {
        printf("%d ", i + 1);
        i++;
    } while (i < 10);
    printf("\n");
}

void example_1() {
    int a[][1][3] = {{1, 2, 3}, {4, 5, 6}};

    do {
        while (a[0][0][0] <= 6) {
            printf("%d ", a[0][0][0]);
            a[0][0][0]++;
        }
    } while (a[0][0][0] <= 6);
    printf("\n");
}

int main(void) {
    forloop();
    whileloop();
    dowhileloop();
    example_1();

    return 0;
}
