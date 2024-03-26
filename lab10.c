#include <stdio.h>

int factorial(int n) {
int result = 1,i;

    // Calculate the factorial
    for ( i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int number,fact;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        fact = factorial(number);
        printf("The factorial of %d is %d\n", number, fact);
    }

    return 0;
}