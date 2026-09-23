#include<stdio.h>
int rev = 0;
void reverse(int n, rev){
    if(n==0) return;
    //rev = (rev*10) + (n%10);
    //reverse(n/10);
    return reverse(n/10, rev*10+n%10);
}
int main(){
    int n = 321;
    reverse(n);
    printf("%d", rev);
    return 0;
}
