//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int i;
    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("d",i);
        }
    }
    return 0;
}