//
// Created by KIIT on 21-11-2026.
//
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter one integer numbers: ");
    scanf("%d",&a);
    b = a++;
    b += ++a;
    printf("a = %d, b = %d\n", a, b);
    return 0;

}
