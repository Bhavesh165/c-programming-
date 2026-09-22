#include<stdio.h>
int  add(int a,int b,int c){
    
    return a+b+c;

}

int main (){
    int a ;
    printf("enter the value of a ");
    scanf("%d",&a);
    int b ;
    printf("enter the value of b ");
    scanf("%d",&b);
    int c ;
    printf("enter the value of c ");
    scanf("%d",&c);
     
    int sum = add (a,b,c);
    printf("%d",sum);

    
    return 0;


}
