#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonaccical number is %d", (num - 1) + (num - 2));

    return 0;
}
