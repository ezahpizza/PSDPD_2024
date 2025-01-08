#include <stdio.h>
#include <math.h>

const int SENTINEL = -1;

int main () {
    int x[20];
    int y[20];
    int z[20];
    int sum;
    int c1, c2;

    printf("ARRAY 1\n");

    for(int i = 0; i < 20 ; i++) {
        int num; 
        printf("Enter upto 20 numbers. Enter -1 to stop.\n");
        scanf("%d", &num);
        if (num != SENTINEL) {
            x[i] = num;
            c1++;
        }
        else
            break;
    }

    printf("\nARRAY 2\n");

    for(int i = 0; i < 20 ; i++) {
        int num; 
        printf("Enter upto 20 numbers. Enter -1 to stop.\n");
        scanf("%d", &num);
        if (num != SENTINEL) {
            y[i] = num;
            c2++;
        }
        else
            break;
    }

    for(int i = 0; i < 20 ; i++) {
        if (c1 == c2) {
            z[i] = x[i] * y[i];
            sum +=  x[i] * y[i];
        }
        else {
            printf("ERROR: Lists are of different lengths.");
            return 0;
        }
    }

    printf("X\tY\tZ\n");
    printf("------------------\n");
    for(int i = 0; i < c1 ; i++) 
        printf("%d\t%d\t%d\n",x[i], y[i], z[i]);
    
    printf("Square root of entries in Z: %.2lf", sqrt(sum));

    return 0;
}