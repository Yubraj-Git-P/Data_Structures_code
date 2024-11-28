#include <stdio.h>

// Function to generate Fibonacci sequence iteratively
void fibonacciIterative(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci sequence: %d %d", a, b);
    for (int i = 2; i < n; i++) {
        next = a + b;
        a = b;
        b = next;
        printf(" %d", next);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci sequence: 0\n");
    } else {
        fibonacciIterative(n);
    }

    return 0;
}
