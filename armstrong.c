#include <stdio.h>
int main()
{
    int n, digit=0, prod=0 , temp;
    printf("enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp>0){
        temp /= 10;
        digit++;
    }
    temp = n;
    
    while (temp!=0){
        digit = temp%10;
        prod += digit*digit*digit;
        temp /= 10;
    }
    if (prod == n) printf("armstrong number it is");
    else printf("not armstrong");
    return 0;

}
