
#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n < 0) {
        return -1; 
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

    if (result == -1) {
        FILE *error_file = fopen("error.log", "a"); // Open the file in append mode
        if (error_file == NULL) {
            perror("Error opening error log file");
            return 1;
        }

        fprintf(error_file, "Error: Factorial of negative number (%d) is not defined.\n", num);
        fclose(error_file);

        printf("Error: Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}
