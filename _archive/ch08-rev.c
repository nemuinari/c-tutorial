#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#define MAX_STR_LEN 5

int main(int argc, char* argv[]) {
    setlocale(LC_CTYPE, "");

    wchar_t three = L'3';
    wchar_t a = L'あ';
    wchar_t hello[MAX_STR_LEN + 1] = L"Hello";

    wprintf(L"Character: %lc\n", three);
    wprintf(L"Character: %lc\n", a);
    wprintf(L"String: %ls\n", hello);

    int len = wcslen(hello);
    wprintf(L"Length of string \"%ls\": %d\n", hello, len);

    wchar_t hello_copy[MAX_STR_LEN + 1];
    wcscpy(hello_copy, hello);
    wprintf(L"Copied string: %ls\n", hello_copy);

    if (wcscmp(hello, hello_copy) == 0) {
        wprintf(L"Matched strings: \"%ls\" == \"%ls\"\n", hello, hello_copy);
    } else {
        wprintf(L"Strings do not match: \"%ls\" != \"%ls\"\n", hello, hello_copy);
    }

    // reverse a string
    if (argc < 2) {
        return 1;
    }

    char buff[MAX_STR_LEN + 1];
    strncpy(buff, argv[1], MAX_STR_LEN);

    int arg_len = strlen(buff);

    char buff_cpy[MAX_STR_LEN + 1];
    for (int i = 0; i < arg_len; i++) {
        buff_cpy[i] = buff[arg_len - 1 - i];
    }
    buff_cpy[arg_len] = '\0';

    printf("Reversed string: %s\n", buff_cpy);

    return 0;
}
