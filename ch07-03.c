#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 4

int main(int argc, char* argv[]) {
    char buff[MAX_STR_LEN + 1];
    for (int i = 1; i < argc; i++) {
        strncpy(buff, argv[i], MAX_STR_LEN);
        puts(buff);
    }

    // String Compariso: 0 is equal, <0 is less than, >0 is greater than
    int result = strcmp(argv[1], argv[2]);
    if (result < 0) {
        printf("\"%s\" < \"%s\"\n", argv[1], argv[2]);
    } else if (result > 0) {
        printf("\"%s\" >  \"%s\"\n", argv[1], argv[2]);
    } else {
        printf("\"%s\" ==  \"%s\"\n", argv[1], argv[2]);
    }

    // String concatenation
    char str[MAX_STR_LEN * 2 + 1];
    strcpy(str, argv[1]);
    strcat(str, argv[2]);
    printf("Concatenated string: %s\n", str);

    return 0;
}
