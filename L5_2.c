#include <stdio.h>

int main() {
    int upc[12];
    int sum_o = 0, sum_e = 0, check_dig;  

    printf("Enter the 12 digits of the UPC: \n");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &upc[i]);
        if (upc[i] < 0 || upc[i] > 9) {
            printf("Invalid input\n");
            return 1;
        }
    }

    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0)
            sum_o += upc[i];
        else
            sum_e += upc[i];
    }

    int sum = sum_o * 3 + sum_e; 
    int sum_last = sum % 10;

    if (sum_last == 0)
        check_dig = sum_last;
    else
        check_dig = 10 - sum_last;

    if (check_dig == upc[11])
        printf("Validated\n");
    else
        printf("Error in barcode\n");

    return 0;
}
