/*fine on late days */
#include<stdio.h>
int main(){
    int n;
    /*n = no of late days */
    printf("enter the value of n = ");
    scanf("%d",&n);

    int fine ;

    if(n<=5){

    fine=2*n;
        printf(" %d ",fine);
        

    }
    if(5<=n<=10){
        fine=4*(n-5)+(2*5);
        printf(" %d ",fine);
        


    }
    if(10<=n<=20){
        fine=6*(n-10)+(4*5)+(2*5);
        printf(" %d ",fine);
        
    }
    if(n>30){
        printf("membership cancellled");
    }

    return 0;

}