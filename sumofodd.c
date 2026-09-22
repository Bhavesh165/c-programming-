#include <stdio.h>

int main() {
    int n, i, sum = 0;

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("The first %d odd natural numbers are: ", n);

    
    for (i = 1; i <= n; i++) {
        int odd_number = 2 * i - 1; 
        printf("%d ", odd_number);
        sum += odd_number;          
    }

  
    printf("\nThe sum of the first %d odd natural numbers is: %d\n", n, sum);

    return 0;
}
