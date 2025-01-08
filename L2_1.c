#include <stdio.h>

int main () {
    double heading, bearing, turn;

    printf("Enter the compass headings in degrees: ");
    scanf("%lf", &heading);

    if(heading > 360 || heading < 0) 
        printf("Invalid heading. Try again.");

    if (heading > 90 && heading <= 270) { // South   
        printf("You need to face South.\n");
        if (heading == 180) 
            printf("\n");
        else if (heading > 180) 
            printf("Turn %.2lf degrees west.\n", (heading - 180));
        else
            printf("Turn %.2lf degrees east.\n", (180 - heading));
    }
    else { //North
        printf("You need to face North.\n");
        if (heading == 0 || heading == 360) 
            printf("\n");
        else if (heading <= 90) 
            printf("Turn %.2lf degrees east.\n",heading);
        else
            printf("Turn %.2lf degrees west.\n", (360 - heading));
    }
    return 0;
}