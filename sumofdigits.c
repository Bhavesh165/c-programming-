#include <stdio.h>
int main(){
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);

    int sum,digit;
    while  (n>0)
    {
        digit=n%10;
        sum =sum+ digit;
        n = n/10;

    }
    printf("digit %d",sum);
    return 0;

}
