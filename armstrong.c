#include <stdio.h>

int main()
{
    int n, digit, temp, digits, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    digits = 0;
    sum = 0;

    
    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

   
    while(temp > 0)
    {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if(sum == n)
    {
        printf("%d is an Armstrong number", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }

    return 0;
}
