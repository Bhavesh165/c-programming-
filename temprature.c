#include<stdio.h>
int main(){
float c;
printf("enter temprature in celsius ");
scanf("%f",&c);
float f=(c*9/5)+32;
printf("temprature in fahrenheit is %f",f);
return 0;
}