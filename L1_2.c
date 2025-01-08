#include <stdio.h>

const int TOILET_USAGE = 14;
const int OLD_FLUSH = 15;
const int NEW_FLUSH = 2;
const int COST_NEW_TOILET = 150;

void calculate_savings_cost (int population) { 
    int total_toilets = population / 3;
    int old_total = total_toilets * TOILET_USAGE * OLD_FLUSH;
    int new_total = total_toilets * TOILET_USAGE * NEW_FLUSH;
    int savings = old_total - new_total;

    printf("Total water used by old systems: %d\n", old_total);
    printf("Total water used by new systems: %d\n", new_total);
    printf("Total savings: %d\n", savings);

    int cost = COST_NEW_TOILET * total_toilets;
    printf("Total cost of new toilets: %d\n", cost);
}

int main () {
    int population;
    printf("Enter the population: ");
    scanf("%d", &population);
    calculate_savings_cost(population);
    
    return 0;
}