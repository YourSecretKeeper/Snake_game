#include <stdio.h>


void TOH(int n, char source, char helper, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    TOH(n - 1, source, destination, helper);
    
    printf("Move disk %d from %c to %c\n", n, source, destination);
    
    TOH(n - 1, helper, source, destination);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("Steps to solve Tower of Hanoi:\n");
    TOH(n, 'A', 'B', 'C');  // A = source, B = helper, C = destination
    
    return 0;
}
