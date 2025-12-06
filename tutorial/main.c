#include <stdio.h>

// ポインタについて
// 引数には、*を付けてポインタ型で受け取る
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 7;
    int b = 12;

    swap(&a, &b);  // 変数aとbのアドレスを渡す
    printf("a = %d, b = %d\n", a, b);
    return 0;
}