//
// Created by KIIT on 22-11-2026.
//
#include<stdio.h>
int main() {
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num & 1 == 1) {
        printf("ODD");
    }
    else {
        printf("EVEN");
    }
}