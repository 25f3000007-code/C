//
// Created by KIIT on 24-11-2026.
//

#include <stdio.h>
int factorial(int x) {
    int factorial = 1;
    for (int i = 1; i <= x; i++) {
        factorial = factorial * i;
    }
    return factorial;
}
int strongNumber(int n) {
    int temp = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }
    return sum;
}
int main() {
    int value;
    int z;
    printf("Input a Number: ");
    scanf("%d", &value);
    z = strongNumber(value);
    if (z == value) {
        printf("The %d number is the strong number", value);
    }
    else {
        printf("The %d number is not the strong number", value);
    }
}
