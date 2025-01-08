#include <stdio.h>

double celcius_at_depth(double depth) {
    return 10 * depth + 20;
}

double fahrenheit(double celcius) {
    return 1.8 * celcius + 32;
}

int main() {
    double depth;
    printf("Enter the depth in km: ");
    scanf("%lf", &depth);

    double celcius = celcius_at_depth(depth);
    double fahrenheit_temp = fahrenheit(celcius);

    printf("Temperature at depth %.2lf km is: %.2lf celcius\n", depth, celcius);
    printf("Temperature in fahrenheit: %.2lf fahrenheit\n", fahrenheit_temp);

    return 0;
}