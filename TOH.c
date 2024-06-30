#include <stdio.h>
void solveTowerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", source, destination);
        return;
    }

    solveTowerOfHanoi(n - 1, source, auxiliary, destination);
    
    printf("Move disc %d from %c to %c\n", n, source, destination);

    solveTowerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int numberOfDiscs;
    printf("Enter the number of discs: ");
    scanf("%d", &numberOfDiscs);
    printf("Steps to solve the Tower of Hanoi with %d discs:\n", numberOfDiscs);
    solveTowerOfHanoi(numberOfDiscs, 'A', 'C', 'B');
    return 0;
}
