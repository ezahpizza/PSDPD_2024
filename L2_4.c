#include <stdio.h>

int leap( int year) {

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        return 1;
    else 
        return 0;
    
}

int main() {
    int year, month, day, leap_day, day_num;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Enter the month:");
    scanf("%d", &month);
    printf("Enter the day:");
    scanf("%d", &day);

    leap_day = leap(year);

    switch (month) {
    case 1:
        day_num += day;
        break;

    case 2:
        day_num += 31 + day;
        break;

    case 3:
        day_num += 31 + 28 + leap_day + day;
        break;
    case 4:

        day_num += 31 + 28 + 31 + leap_day + day;
        break;

    case 5:
        day_num += 31 + 28 + 31 + 30 + leap_day + day;
        break;

    case 6:
        day_num += 31 + 28 + 31 + 30 + 31 + leap_day + day;
        break;

    case 7:
        day_num += 31 + 28 + 31 + 30 + 31 + 30 + leap_day + day;
        break;

    case 8:
        day_num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + leap_day + day;
        break;

    case 9:
        day_num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + leap_day + day;
        break;

    case 10:
        day_num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + leap_day + day;
        break;

    case 11:
        day_num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + leap_day + day;
        break;

    case 12:
        day_num += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + leap_day + day;
        break;

    default:
        break;
    }

    printf("%d-%d-%d is the day number %d for the year %d", day, month, year, day_num, year);
    return 0;
}