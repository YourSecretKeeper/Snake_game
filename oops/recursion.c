#include <stdio.h>

void fibonacci_recursive(int a, int b, int limit) {
    if (a > limit)
        return;
    printf("%d ", a);
    fibonacci_recursive(b, a + b, limit);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci series using recursion:\n");
    fibonacci_recursive(0, 1, num);

    return 0;
}
