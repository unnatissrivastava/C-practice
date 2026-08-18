

#include <stdio.h>

int main()
{
    int num,count;
     printf("enter a number: ");
    scanf("%d", &num);

    count = 0;
    while (num>0){
        count +=1;   
        num = num/10;}

    printf("number of digits are:%d " ,count);


    return 0;
}
