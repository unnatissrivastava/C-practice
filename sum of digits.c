#include <stdio.h>

int main()
{
    int number, total_sum, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    total_sum = 0;

    while (number > 0)
    {
        digit = number % 10;
        total_sum = number + digit;
        number = number / 10;
        
    }

    printf("sum of digits is: %d", total_sum);

    return 0;
}
