#include <stdio.h>

int binary_srch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  
        if (arr[mid] == target) 
            return mid;  
        else if (arr[mid] < target) 
            low = mid + 1; 
        else 
            high = mid - 1; 
    }

    return -1;  
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target; 
    printf("Enter target value");
    scanf("%d", &target);

    int result = binary_srch(arr, n, target);

    if (result != -1) 
        printf("Target %d found at index %d.\n", target, result);
    else 
        printf("Target %d not found.\n", target);
    
    return 0;
}
