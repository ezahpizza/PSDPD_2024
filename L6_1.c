#include <stdio.h>
#include <string.h>

void deblank(const char input[], char output[]) {
    int j = 0; 
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ') 
            output[j++] = input[i];
    }
    output[j] = '\0'; 
}

int main() {
    char input[100], output[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') 
        input[len - 1] = '\0';

    deblank(input, output);

    printf("Original string: \"%s\"\n", input);
    printf("String without blanks: \"%s\"\n", output);

    return 0;
}
