#include <stdio.h>

int is_divisible(int num) {
    if(num % 3 == 0 && num % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(is_divisible(num)) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }

    return 0;
}