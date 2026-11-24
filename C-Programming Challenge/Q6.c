//
// Created by KIIT on 20-11-2026.
//
#include<stdio.h>
#define pi 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679
int main() {
    float radius;
    printf("Input the radius: ");
    scanf("%f",&radius);

    float area = pi * radius * radius;
    printf("The area of the circle is: %.2f",area);

}
