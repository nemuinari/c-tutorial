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

int main(void) {
    forloop();
    whileloop();
    dowhileloop();

    return 0;
}
