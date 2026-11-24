//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    int a;
    for(a = 1; a <= 10 ; a++) {
        printf("%d * %d = %d\n",i,a,a*i);
    }
    return 0;
}