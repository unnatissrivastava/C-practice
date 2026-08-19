#include <stdio.h>

int main()
{
    int n, d1, d2, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        d1 = n % 10;
        n = n / 10;
        d2 = n % 10;

        if(d1 > d2)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Ascending");
    }
    else
    {
        printf("Not Ascending");
    }

    return 0;
}
