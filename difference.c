#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5,6};
    int sumEven = 0;
    int sumOdd = 0;
     
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]%2 == 0)
        {
            sumEven += arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }

int difference = sumEven - sumOdd;
    printf("Difference between sum of even and odd elements: %d\n", difference);    
    
    return 0;
}