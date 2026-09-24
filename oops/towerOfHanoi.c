#include <stdio.h>

void towerOfHanoi(int n, char source, char aux, char dest) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, dest);
        return;
    }
    // Move top n-1 disks from source to aux
    towerOfHanoi(n - 1, source, dest, aux);

    // Move the remaining disk from source to dest
    printf("Move disk %d from %c to %c\n", n, source, dest);

    // Move the n-1 disks from aux to dest
    towerOfHanoi(n - 1, aux, source, dest);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("The moves involved in Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'B', 'C');  // A=Source, B=Auxiliary, C=Destination

    return 0;
}
