#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof(int));
    for (int i = 0; i<n ; i++){
        scanf("%d", &arr[i]);
        int max = arr[0];
        for(int i=1; i<n;i++){
            if(arr[i]>max);
            max = arr[i];
        }
    }
    return 0;
       
}
