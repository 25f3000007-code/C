//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);
    int i;
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d is a factor of %d\n", i, a);
        }
    }
}