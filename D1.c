//
// Created by KIIT on 23-11-2026.
//

#include <stdio.h>

int main() {
    int n, original, reverse = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        int digit = n % 10;

        reverse = reverse * 10 + digit;
        sum = sum + digit;

        n = n / 10;
    }

    // Check palindrome
    if (original == reverse) {
        printf("Number is Palindrome\n");
    }
    else {
        printf("Number is Not Palindrome\n");
    }

    // Check sum of digits
    printf("Sum of digits = %d\n", sum);

    if (sum % 2 == 0) {
        printf("Sum of digits is EVEN");
    }
    else {
        printf("Sum of digits is ODD");
    }

    return 0;
}
