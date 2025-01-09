#include <stdio.h>

int quot(int dividend, int divisor, int quotient) {
    if (dividend < divisor) 
        return quotient;
    
    return quot(dividend - divisor, divisor, quotient + 1);
}

int main() {
    int dividend = 20, divisor = 4;

    if (divisor == 0) {
        printf("Division by zero is not allowed.\n");
        return -1;
    }

    int quotient = quot(dividend, divisor, 0);
    printf("The result of %d divided by %d is %d\n", dividend, divisor, quotient);

    return 0;
}
