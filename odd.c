#include <stdio.h>

int main() {
    int num, product = 1, hasOdd = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits is: %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}