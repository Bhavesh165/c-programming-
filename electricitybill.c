/*electricity bill */
#include<stdio.h>
int main(){
    int n;
    /*n = units */
    printf("enter the value of n = ");
    scanf("%d",&n);

    int bill ;

    if(n<=100){

    bill=5*n;
        printf(" %d ",bill);
        

    }
    if(100<=n<=200){
        bill=7*(n-100)+(5*100);
        printf("  %d  ",bill);
        


    }
    if(200<=n<=300){
        bill=10*(n-200)+(7*100)+(100*5);
        printf(" %d ",bill);
        
    }
    if(n>=300){
        bill=12*n;
        printf(" %d ",bill);
    }

    return 0;

}