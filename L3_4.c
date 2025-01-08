#include <stdio.h>

double fast_food_billions (int year) {
    return 33.2 + 16.8 * (year - 2005);
}

int main () {
    while (1) {
        int year;
        printf("\nEnter a year after 2005 to predict: \nEnter a year < 2005 to stop: ");
        scanf("%d", &year);
        if (year < 2005) 
            break;
        printf("For the year %d: $%.2f billion \n", year, fast_food_billions(year));
    }

    return 0;
}