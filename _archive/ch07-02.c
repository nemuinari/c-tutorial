#include <stdio.h>

int main(void) {
    char a[] = "This is a string.";

    int count = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        count++;
    }
    printf("The length of the string is: %d\n", count);

    a[3] = '\0';
    printf("Modified string: %s\n", a);

    return 0;
}
