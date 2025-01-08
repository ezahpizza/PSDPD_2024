#include <stdio.h>
#include <string.h>
void fact_calc(char *output, int n) {
    if (n < 0 || n > 9) {
        strcpy(output, "Invalid input");
        return;
    }
    int factorial = 1;
    char calculation[100] = "";
    sprintf(output, "%d! = ", n);
    for (int i = n; i > 0; i--) {
        factorial *= i;
        char temp[10];
        sprintf(temp, "%d%s", i, (i > 1) ? " x " : "");
        strcat(calculation, temp);
    }
    sprintf(output + strlen(output), "%s = %d", calculation,
    factorial);
}
void print_in_box(const char *message) {
    int len = strlen(message);

    for (int i = 0; i < len + 4; i++)
        putchar('*');
    putchar('\n');
    
    printf("* %s *\n", message);
    for (int i = 0; i < len + 4; i++)
        putchar('*');
    putchar('\n');
}
int main() {
    int n;
    char output[200];
    while (1) {
        printf("Enter an integer between 0-9 or -1 to quit => ");
        scanf("%d", &n);
        if (n == -1)
        break;
        if (n < 0 || n > 9) {
            printf("Invalid entry\n");
            continue;
        }
        fact_calc(output, n);
        print_in_box(output);
    }
    return 0;
}