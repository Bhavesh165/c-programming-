#include<stdio.h>
int main(){
    int arr[7]={2,4,7,8,11,3,9};
    int max=-1;
    for(int i=0;i<=7;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}