#include <stdio.h>

int main() {
    int piels, coors, bud, iron_city;
    int id, amount;
    
    printf("Enter the initial inventory for each brand:\n");
    printf("Piels: ");
    scanf("%d", &piels);
    printf("Coors: ");
    scanf("%d", &coors);
    printf("Bud: ");
    scanf("%d", &bud);
    printf("Iron City: ");
    scanf("%d", &iron_city);

    printf("\nEnter transactions:\nBrand IDs:\n1:Piels, 2:Coors, 3:Bud, 4:Iron City\nEnter -1 to stop");
    while (1) {
        printf("Enter brand ID  ");
        scanf("%d", &id);

        if (id == -1) 
            break;  

        if (id < 1 || id > 4) {
            printf("Invalid brand ID. Please enter a value between 1 and 4.\n");
            continue;
        }

        printf("Enter amount (positive for purchase, negative for sale): ");
        scanf("%d", &amount);

        if (id == 1) 
            piels += amount;
        else if (id == 2) 
            coors += amount;
        else if (id == 3) 
            bud += amount;
        else if (id == 4) 
            iron_city += amount;
        
    }

    printf("\nFinal Inventory:\n");
    printf("Piels: %d cases\n", piels);
    printf("Coors: %d cases\n", coors);
    printf("Bud: %d cases\n", bud);
    printf("Iron City: %d cases\n", iron_city);

    return 0;
}
