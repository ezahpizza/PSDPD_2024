#include <stdio.h>

void atm (int amount, int *tens, int *twenties, int *fifties ) {
    *fifties = amount / 50;
    amount %= 50;
    *twenties = amount / 20;
    amount %= 20;
    *tens = amount / 10;
}

int main () {
    int amount, tens, twenties, fifties;
    printf("Enter the amount: \n");
    scanf("%d", &amount);
    atm (amount, &tens, &twenties, &fifties);

    printf("Bills Dispensed:\n 50: %d\n 20: %d\n 10: %d\n", fifties, twenties, tens);

    return 0;
}