#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {   
            sum = sum + i;
        }
    }

    printf("Sum of divisors of %d = %d\n", n, sum);

    return 0;
}
