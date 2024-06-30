#include <stdio.h>

// Function to move disks from one rod to another
void moveDisk(int n, char from_rod, char to_rod) {
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
}

// Recursive function to solve the Tower of Hanoi problem
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        moveDisk(n, from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    moveDisk(n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n; // Number of disks

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are names of rods

    return 0;
}

