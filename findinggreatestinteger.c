#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter first number =");
    scanf("%d", &a);
    printf("enter second number =");
    scanf("%d", &b);
    printf("enter third number =");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("greatest number is %d", a);
    }
    if (b > a && b > c)
    {
        printf("greatest number is %d", b);
    }
    if (c > b && c > a)
    {
        printf("greatest number is %d", c);
    }
    return 0;
}