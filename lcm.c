#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    
    while (tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    gcd = tempA;


    lcm = (a * b) / gcd;

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}