#include <stdio.h>
#include <math.h>

void scan_vector(double arr[], int *n) {
    printf("Enter the number of elements (max 100): ");
    scanf("%d", n);

    printf("Enter the elements:\n");
    for (int i = 0; i < *n; i++) 
        scanf("%lf", &arr[i]);
    
}

void print_vector(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}

void normalize_vector(double arr[], double norm[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) 
        sum += arr[i] * arr[i];
    
    double sum_sqrt = sqrt(sum);

    if (sum_sqrt == 0) {
        printf("Cannot normalize a zero vector.\n");
        return;
    }

    for (int i = 0; i < n; i++) 
        norm[i] = arr[i] / sum_sqrt;
}

int main() {
    double arr[100];
    double norm[100];
    int n;

    scan_vector(arr, &n);

    normalize_vector(arr, norm, n);

    printf("Original vector:\n");
    print_vector(arr, n);

    printf("Normalized vector:\n");
    print_vector(norm, n);
    
    return 0;
}
