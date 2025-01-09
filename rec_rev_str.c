#include <stdio.h>
#include <string.h>

void revStr(char str[], int start, int end) {
    if (start >= end) 
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    revStr(str, start + 1, end - 1);
}

int main() {
    char str[] = "Hello, World!";

    int length = strlen(str);
    revStr(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}
