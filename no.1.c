#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    printf("Enter a 3-digit positive integer: ");
    scanf("%d", &num);

    
    if(num < 100 || num > 999) {
        printf("Invalid input. Please enter a 3-digit positive integer.\n");
        return 1;
    }


    first_digit = num / 100;

    
    last_digit = num % 10;

   
    sum = first_digit + last_digit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}