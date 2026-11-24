//
// Created by KIIT on 23-11-2026.
//
#include<stdio.h>
int main() {
    int a ;
    printf("a = ");
    scanf("%d",&a);
    int b ;
    printf("b = ");
    scanf("%d",&b);
    printf("before swaping : %d,%d",a,b);

    a = a+b;
    b = a-b;
    b = a-b;
    printf("after swaping : %d,%d",a,b);
    return 0;
}