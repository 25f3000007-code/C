//
// Created by KIIT on 24-11-2026.
//
#include <stdio.h>
int factorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
        return factorial;
    }

int strongnumber(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n%10;
        sum = sum + factorial(digit);
        n = n/10;
    } return sum;
}
int main() {
    printf("%d\n", strongnumber(145));
    return 0;
}