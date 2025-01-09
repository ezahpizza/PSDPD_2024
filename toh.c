#include <stdio.h>

void towersOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", fromRod, toRod);
        return;
    }
    towersOfHanoi(n - 1, fromRod, auxRod, toRod);

    printf("Move disk %d from rod %c to rod %c\n", n, fromRod, toRod);

    towersOfHanoi(n - 1, auxRod, toRod, fromRod);
}

int main() {
    int n = 3; 

    printf("Towers of Hanoi solution for %d disks:\n", n);
    towersOfHanoi(n, 'A', 'C', 'B'); 

    return 0;
}
