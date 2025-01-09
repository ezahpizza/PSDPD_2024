#include <stdio.h>

int revNum(int num, int reversed) {
    if (num == 0) 
        return reversed;
    
    return revNum(num / 10, reversed * 10 + num % 10);
}

int main() {
    int num = 12345;

    int reversed = revNum(num, 0);
    printf("The reversed number is %d\n", reversed);

    return 0;
}
