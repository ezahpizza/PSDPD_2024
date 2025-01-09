#include <stdio.h>
#include <string.h>


typedef struct {
    int atomic_number;
    char name[50];
    char symbol[10];
    char class_[50];
    float atomic_weight;
    int electrons[7];
} element_t;


void scan_element(element_t *element) {
    printf("Enter atomic number: ");
    scanf("%d", &element->atomic_number);
    printf("Enter name: ");
    scanf("%49s", element->name);
    printf("Enter symbol: ");
    scanf("%9s", element->symbol);
    printf("Enter class: ");
    scanf("%49s", element->class_);
    printf("Enter atomic weight: ");
    scanf("%f", &element->atomic_weight);
    printf("Enter number of electrons in each shell (7 values): ");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &element->electrons[i]);
    }
}


void print_element(element_t element) {
    printf("%d %s %s %s %.4f ", element.atomic_number, element.name, element.symbol, element.class_, element.atomic_weight);
    for (int i = 0; i < 7; i++) {
        printf("%d ", element.electrons[i]);
    }
    printf("\n");
}

int main() {
    element_t sodium;

    printf("Enter element information for sodium:\n");
    scan_element(&sodium);

    printf("\nElement information for sodium:\n");
    print_element(sodium);

   
    sodium.atomic_number = 11;
    strcpy(sodium.name, "Sodium");
    strcpy(sodium.symbol, "Na");
    strcpy(sodium.class_, "alkali metal");
    sodium.atomic_weight = 22.9898;
    sodium.electrons[0] = 2;
    sodium.electrons[1] = 8;
    sodium.electrons[2] = 1;
    sodium.electrons[3] = 0;
    sodium.electrons[4] = 0;
    sodium.electrons[5] = 0;
    sodium.electrons[6] = 0;

    printf("\nPredefined element information for sodium:\n");
    print_element(sodium);

    return 0;
}