#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) 
            if (arr[j] < arr[minIndex]) 
                minIndex = j;

        if (minIndex != i) {
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    
    printf("\n");
}

int main() {
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Original array:\n");
    print_array(arr, n);

    selectionSort(arr, n);

    printf("Sorted array:\n");
    print_array(arr, n);

    return 0;
}
