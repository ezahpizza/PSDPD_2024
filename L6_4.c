#include <stdio.h>
#include <string.h>

void generate_plural(const char *noun, char *plural) {
    size_t len = strlen(noun);
    if (len > 0 && noun[len - 1] == 'y') {
        strncpy(plural, noun, len - 1);
        plural[len - 1] = '\0';
        strcat(plural, "ies");
    }
    else if (len > 1 && (noun[len - 1] == 's' ||
        (len > 2 && strcmp(&noun[len - 2], "ch") == 0) ||
        (len > 2 && strcmp(&noun[len - 2], "sh") == 0))) {
        strcpy(plural, noun);
        strcat(plural, "es");
    }
    else {
        strcpy(plural, noun);
        strcat(plural, "s");
    }
}
int main() {
    char noun[100];
    char plural[200];

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    size_t len = strlen(noun);

    if (len > 0 && noun[len - 1] == '\n')
        noun[len - 1] = '\0';

    generate_plural(noun, plural);
    printf("Singular: %s, Plural: %s\n", noun, plural);
    
    return 0;
}