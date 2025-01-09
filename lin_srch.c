#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) 
        if (arr[i] == key) 
            return i;
    return -1; 
}

int main() {
    int arr[100]; 
    int key, n;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    printf("Enter the element to search for: ");
    scanf("%d", &key); 
    
    int result = linearSearch(arr, n, key);
    if (result != -1) 
        printf("Element found at index %d\n", result);
    else 
        printf("Element not found\n");

    return 0;
}
