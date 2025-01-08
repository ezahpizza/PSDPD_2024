#include <stdio.h>
#include <string.h>

int hydroxide(const char *str) {
    int len = strlen(str);

    if (len >= 2 && str[len - 2] == 'O' && str[len - 1] == 'H') 
        return 1;

    return 0;
}

int main() {
    char test[100];
    printf("Enter a string: ");
    fgets(test, sizeof(test), stdin);
    
    test[strcspn(test, "\n")] = '\0';

    int result = hydroxide(test);
    printf("\"%s\" ends with OH? %s\n", test, result ? "Yes" : "No");

    return 0;
}

