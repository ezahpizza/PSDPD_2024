#include <stdio.h>

int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        return 1;
    return 0; 
}

int day_number(int day, int month, int year) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_num = day;

    for (int i = 0; i < month - 1; i++) 
        day_num += days_in_month[i];

    if (month > 2 && leap(year)) 
        day_num++;

    return day_num;
}

int main() {
    int day, month, year;

    printf("Enter the date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date.\n");
        return 1;
    }

    int result = day_number(day, month, year);
    printf("The day number for %d/%d/%d is %d.\n", day, month, year, result);

    return 0;
}
