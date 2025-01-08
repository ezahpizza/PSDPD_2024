#include <stdio.h>

int main () {
    printf("(1)\tCarbon monoxide\n(2)\tHydrocarbons\n(3)\tNitrogen oxides\n(4)\tNon Methane hydrocarbons\n");

    int choice, odometer;
    double emissions;

    printf ("Enter pollutant number: ");
    scanf("%d", &choice);
    printf ("Enter number of grams emmitted per mile: ");
    scanf("%lf", &emissions);
    printf ("Enter odometer reading: ");
    scanf("%d", &odometer);

    switch (choice) {
    case 1:
        if (odometer <= 50000){
            if(emissions > 3.4)
                printf ("Emisions exceeded permitted level of 3.4 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        else if (odometer > 50000 && odometer <= 100000){
            if(emissions > 4.2)
                printf ("Emisions exceeded permitted level of 4.2 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        break;
    
    case 2:
        if (odometer <= 50000){
            if(emissions > 0.31)
                printf ("Emisions exceeded permitted level of 0.31 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        else if (odometer > 50000 && odometer <= 100000){
            if(emissions > 0.39)
                printf ("Emisions exceeded permitted level of 0.39 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        break;

    case 3:
        if (odometer <= 50000){
            if(emissions > 0.4)
                printf ("Emisions exceeded permitted level of 0.4 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        else if (odometer > 50000 && odometer <= 100000){
            if(emissions > 0.5)
                printf ("Emisions exceeded permitted level of 0.5 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        break;
    
    case 4:
        if (odometer <= 50000){
            if(emissions > 0.25)
                printf ("Emisions exceeded permitted level of 0.25 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        else if (odometer > 50000 && odometer <= 100000){
            if(emissions > 0.31)
                printf ("Emisions exceeded permitted level of 0.31 grams/mile");
            else 
                printf ("Emisions are under permitted levels.");
        }
        break;
    
    default:
        printf ("Invalid choice");
        break;
    }

    return 0;
}