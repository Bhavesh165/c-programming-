#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a : ");
    scanf("%d",&a);

    printf("enter the value of b : ");
    scanf("%d",&b);

    char sign;
    printf("enter any sign(+,-,/,*) ");
    scanf(" %c ",&sign);

    int sum, diff, mul, div;

    switch (sign)

    {

    case '+':

        printf("%d",a + b);
        break;

    case '-':

        printf("%d",a - b);
        break;

    case '*':

        printf("%d",a * b);
        break;

    case '/':

        printf("%d",a / b);
        break;

    default:
        printf("Invalid operator");
    }
    return 0;
}