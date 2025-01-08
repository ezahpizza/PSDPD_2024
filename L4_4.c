#include <stdio.h>

const double RHO = 1.23;

void drag(double v, double cd, double a, double *f) {
    *f = 0.5 * cd * a * RHO * v * v;
}

int main () { 
    double v, cd, a, f;
    printf("Enter Area (m^2): ");
    scanf("%lf", &a);
    printf("Enter Drag Coefficient: ");
    scanf("%lf", &cd);

    for (v = 0; v <= 40; v += 5) {
        drag(v, cd, a, &f);
        printf("Velocity: %.2lf m/s, Drag Force: %.2lf N\n", v, f);
    }

    return 0;
}