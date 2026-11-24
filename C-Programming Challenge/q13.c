//
// Created by KIIT on 22-11-2026.
//
#include <stdio.h>
int main () {
    int a, b;
    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);
    printf("Integer = %d\n", a/b);
    printf("Float = %f\n", (float) a/b);
}