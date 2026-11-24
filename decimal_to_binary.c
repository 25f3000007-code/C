//
// Created by KIIT on 23-11-2026.
//
#include<stdio.h>
int a;

int decimal_to_binary() {
    int binary_number=0;
    int place = 1;
    while (a != 0) {
        int digit = a % 2;
        a = a / 2;
        binary_number += place * digit;
        place = place * 10;
    }
    return binary_number;

}
int main() {
    printf("Input a decimal number ");
    scanf("%d", &a);

    printf("Binary number = %d", decimal_to_binary());

}