#include <stdio.h>
int main()
{
    int a, b, c, n, sum;
    printf("enter a three digit number ");
    scanf("%d", &n);

    a = n % 10;
    a = n / 10;

    b = n % 10;
    b = n / 10;

    c = n % 10;

    sum = (a * a * a) + (b * b * b) + (c * c * c);

    if (sum == (a + (b * 10) + (c * 100)))
    {
        printf("armstrong number ");
    }
    else
    {
        printf("not a armstrong number ");
    }
    return 0;
}