#include <stdio.h>

int main()
{
    int number, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    last_digit = number % 10;

    first_digit = number;
    while (first_digit >= 10)
    {
        first_digit = first_digit / 10;
    }

    sum = first_digit + last_digit;

    printf("Sum of first and last digit: %d", sum);

    return 0;
}
