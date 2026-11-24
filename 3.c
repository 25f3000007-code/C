//
// Created by KIIT on 23-11-2026.
//
#include<stdio.h>
int main() {
    float height;
    float base;
    printf("Enter the height: ");
    scanf("%f",&height);
    printf("Enter the base: ");
    scanf("%f",&base);
    float area = height * base;
    printf("The area is: %.2f",area);
    return 0;
}
