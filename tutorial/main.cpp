#include <stdio.h>

void func(char* s) {
    printf("引数で渡された文字列: %s\n", s);
}

int main(void) {
    char str[] = "dog";
    func(str);
}