#include <stdio.h>

int factorial(int n) {
    if (n < 0) {
        return -1; // Error: Negative input
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    int result = factorial(num);
    if (result == -1) 

{
        printf("Error: Factorial of negative numbers is not defined.\n");
    }
 else {
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}
