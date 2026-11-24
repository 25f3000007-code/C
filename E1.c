//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>

int main() {
    int n, f0 = 0, f1 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", f0);

        next = f0 + f1;
        f0 = f1;
        f1 = next;
    }

    // Check whether nth term is odd
    if (f0 % 2 == 0) {
        printf("\nNth term is Even");
    } else {
        printf("\nNth term is Odd");
    }

    return 0;
}