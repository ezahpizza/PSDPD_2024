#include <stdio.h>

int prod(int a, int b) {
    if (b == 0) 
        return 0; 
    
    if (b > 0) 
        return a + prod(a, b - 1); 
    
    return prod(a, -b);
}

int main() {
    int a = 5, b = -3;

    printf("The product of %d and %d is %d\n", a, b, prod(a, b));

    return 0;
}
