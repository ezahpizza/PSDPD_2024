#include <math.h>
#include <stdio.h>

void square_root(double num, double *sq_root) {
    if (num < 0) {
        printf("Error: Square root of a negative number is not real.\n");
        *sq_root = NAN;  
        return;
    }
    if (num == 0) {
        *sq_root = 0; 
        return;
    }

    double LG = 1.0;  
    while (1) {
        double NG = 0.5 * (LG + (num / LG));
        if (fabs(NG - LG) <= 0.005) { 
            *sq_root = NG;  
            break;
        }
        LG = NG;
    }
}

int main() {
    double num, sq_root;
    printf("Enter a number: ");
    scanf("%lf", &num);

    square_root(num, &sq_root);

    if (!isnan(sq_root)) {  
        printf("Square root of %.2lf is %.2lf\n", num, sq_root);
    }

    return 0;
}
