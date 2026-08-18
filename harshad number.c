#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    if (n % sum == 0)
        printf("%d is a Harshad number", n);
    else
        printf("%d is not a Harshad number", n);

    return 0;
}
