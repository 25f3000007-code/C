//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int a;
    printf("a = ");
    scanf("%d",&a);
    switch(a/2) {
        case 0: printf("The no. %d is even",a); break;
            case 1: printf("The no. %d is odd",a); break;
            case 2: printf("The no. %d is even",a); break;
    }
    return 0;
}