//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main () {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>0) {
        printf("+ve");
    }
    else {
        printf("-ve");
    }
    return 0;
}