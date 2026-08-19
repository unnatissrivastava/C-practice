#include <stdio.h>

int main()
{
    int a[2][3] = {{10, 20, 30}, {40, 50, 60}};
    int n, i, j, flag = 0;

    printf("Enter number to search: ");
    scanf("%d", &n);

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(a[i][j] == n)
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1)
        printf("Number is present");
    else
        printf("Number is not present");

    return 0;
}
