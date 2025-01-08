#include <stdio.h>

double calculate_accln(double v_i, double v_f, double t) {
    return (v_f - v_i) / t;
}

int main () {
    double initial_v, final_v, time;
    printf("Enter the initial velocity in m/s: ");
    scanf("%lf", &initial_v);
    printf("Enter the final velocity in m/s: ");
    scanf("%lf", &final_v);
    printf("Enter the time in s: ");
    scanf("%lf", &time);

    double acceleration = calculate_accln(initial_v, final_v, time);

    printf("The acceleration is: %.3f m/s^2\n", acceleration);
    
    return 0;
}