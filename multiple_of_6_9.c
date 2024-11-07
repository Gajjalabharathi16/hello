#include <stdio.h>

int isDivisibleBy6And9(int num) {
    // Check if the number is even (using bitwise AND) and if it's divisible by 18
    return ((num & 1) == 0) && (num % 18 == 0);
}

int main() {
    int num;

    // Get user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check divisibility
    if (isDivisibleBy6And9(num)) {
        printf("%d is divisible by both 6 and 9.\n", num);
    } else {
        printf("%d is not divisible by both 6 and 9.\n", num);
    }

    return 0;
}

