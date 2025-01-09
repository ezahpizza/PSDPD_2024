#include <stdio.h>
#include <string.h>

void revSent(char str[], int start, int end) {
    if (start >= end) 
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    revSent(str, start + 1, end - 1);
}

void revWords(char str[]) {
    int length = strlen(str);
    int wordStart = 0;

    revSent(str, 0, length - 1);

    for (int i = 0; i <= length; i++) 
        if (str[i] == ' ' || str[i] == '\0') {
            revSent(str, wordStart, i - 1);
            wordStart = i + 1;
        }
}

int main() {
    char str[] = "Hello World from C";

    printf("Original sentence: %s\n", str);

    revWords(str);

    printf("Reversed sentence: %s\n", str);

    return 0;
}
