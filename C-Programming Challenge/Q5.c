//
// Created by KIIT on 20-11-2026.
//
#include <stdio.h>
int main() {
    float cel;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&cel);
    float far = (cel * 1.8) + 32;
    printf("The temperature in Fahrenheit is: %.2f",far);

    return 0;

}
