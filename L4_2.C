#include <stdio.h>

void check (int num, int *multpl, int *sum_odev, int *prime) {
    if (num % 7 == 0 || num % 11 ==0 || num % 13 == 0) //multiple of 7/11/13
        *multpl = 1;
    
    int a = num, sum;
    while (a > 0) {
        int d = a % 10;
        sum += d;
        a /= 10;
    }

    if(sum % 2 == 0) //sum of digits is even
        *sum_odev = 1;
    
    for (int i = 2; i < num; i++) 
        if(num % i == 0)
            *prime = 1;
}

int main () {
    int num, multpl, sum_odev, prime;
    printf("Enter a number: ");
    scanf("%d", &num);

    check(num, &multpl, &sum_odev, &prime);

    if(multpl ==1)
        printf ("%d is a multiple of at least one of 7/11/13.\n", num);

    if (sum_odev == 1)
        printf ("The sum of digits in %d is even.\n", num);
    else
        printf ("The sum of digits in %d is odd.\n", num);

    if (prime != 1)
        printf ("%d is prime.\n", num);
    else
        printf ("%d is not prime.\n", num);

    return 0;
    
}