//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int sum = 0;
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int num = a;

    int count = 0;

    while (a > 0) {
        a = a / 10;
        count++;
    }

    a = num;

    for (int i = 1; i <= count; i++) {
        int digit = a % 10;
        a = a / 10;
        int factorial = 1;
        for (int j = 1; j <= digit; j++) {
            factorial *= j;
        }
        sum = sum + factorial;
    }
    if (sum == num) {
        printf("%d is a strong number.", num);
    }
    else {
        printf("%d is not a strong number.", num);
    }
}

