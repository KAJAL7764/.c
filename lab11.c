#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int number;
    printf("Enter a Positive integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Invalid input. Please enter a Positive integer.\n");
        return 1;
    }

    int result = factorial(number);
    printf("The factorial of %d is %d\n", number, result);

    return 0;
}