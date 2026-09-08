#include <stdio.h>
int main()
{
    int count,n;
    float x,y;
    printf("enter the values of x and n: ");
    scanf("%f %d",&x, &n);
    y = 1.0;
    count = 1;
    //loop begins
    while(count <= n){
        y = y*x;
        count++;
    }
    printf("x = %f; n = %d; x to power n = %f n", x, n, y);
    
    return 0;
    
}
