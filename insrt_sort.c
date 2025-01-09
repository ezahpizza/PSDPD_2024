#include <stdio.h>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr, n);

    printf("Sorted array:\n");
    print_array(arr, n);

    return 0;
}

