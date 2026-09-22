#include <stdio.h>
int main()
{
    void india();

    india();
    return 0;
}
void england()
{
    printf("you are in england\n");
    return;
}
void australia()
{
    printf("you are in australia\n");
    void england();
    england();
}
void india()
{
    printf("you are in india\n");
    void australia();
    australia();
    
}
