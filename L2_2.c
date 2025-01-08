#include <stdio.h>

const double P_RISING =  60;
const int L_SHAPING =  2;
const double F_RISING = 75;
const double COOLING =  30;

int main () {
    double shape_phase = P_RISING;
    double bake_phase = F_RISING + COOLING;
    char type, size, baking;
    double bake_S = 45.0,  bake_W = 35.0;
    double total = 0.0;

    printf ("Enter the type of the bread: (S/W) \n");
    scanf (" %c", &type);
    printf ("Is the loaf size double ? (y/n) \n");
    scanf (" %c", &size);
    printf ("Is the baking manual ? (y/n) \n");
    scanf (" %c", &baking);

    if (type == 'S') 
        shape_phase += 15 + 18 + 20;
    else if (type == 'W') 
        shape_phase += 20 + 33 + 30;
    else {
        printf("Wrong type entered.");
        return 0;
    }
    
    if (baking == 'y') {
        printf("Take the loaf out for manual baking.");
        printf("Time elapsed: %.2lf minutes and %d seconds.", shape_phase, L_SHAPING);
        return 0;
    }

    if (type == 'S'){
        bake_phase += bake_S;
        if (size == 'y')
            bake_phase += 0.5 * bake_S;
    }
    else {
        bake_phase += bake_W;
        if (size == 'y')
            bake_phase += 0.5 * bake_W;
    }
    
    total += shape_phase + bake_phase;
    printf("Time elapsed: %.2lf minutes and %d seconds.", total, L_SHAPING);

    return 0;  
}
