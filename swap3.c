#include <stdio.h>
int main()
{
    int a;
    printf("enter the value of a  ");
    scanf("%d", &a);
    int b;
    printf("enter the value of b  ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("the new value of a is %d\n", a);
    printf("the new value of b is %d\n", b);
    return 0;
}