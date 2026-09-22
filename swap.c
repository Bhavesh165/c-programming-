#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a  ");
    scanf("%d", &a);

    printf("enter the value of b  ");
    scanf("%d", &b);

    int c;
    c = a;
    a = b;
    b = c;
    printf("the new value of a is %d\n", a);
    printf("the new value of b is %d\n", b);

    return 0;
}
