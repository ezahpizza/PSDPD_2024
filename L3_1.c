#include <stdio.h>
#include <math.h>

int main () {
    int n, num;
    double sum, avg, sum_sq, std_dev;

    printf("Enter the number of values: \n");
    scanf("%d", &n);

    printf("Enter a number: \n");
    scanf("%d", &num);
    sum += num;

    int max= num, min = num;
    for (int i = 0 ; i < n - 1 ; i++) {
        printf("Enter a number: \n");
        scanf("%d", &num);

        if (num > max)
            max = num;
        if (num < min)
            min = num;
            
        sum += num;
        sum_sq += num * num;
    }

    avg = sum / n;
    std_dev = sqrt((sum_sq/n) - avg * avg);

    printf("The largest value is: %d\n", max);
    printf("The smallest value is: %d\n", min);
    printf("The range of values is %d to %d\n", min, max);
    printf("The average is: %.2f\n", avg);
    printf("The standard deciation is: %.2f\n", std_dev);

    return 0; 
}