#include <stdio.h>

int main() {
    int n, temp, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digit = temp % 10;

        if (digit == 5)
            count++;

        temp = temp / 10;
    }

    printf("Number of 5s = %d", count);

    return 0;
}
