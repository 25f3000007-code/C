//
// Created by KIIT on 23-11-2026.
//
#include<stdio.h>
int main () {
    int radius;
    float pi = 3.14;
    printf("Enter the radius: ");
    scanf("%d",&radius);
    float area = pi*radius * radius;
    printf("The area is: %.2f",area);
}
