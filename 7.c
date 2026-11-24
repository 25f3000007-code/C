//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int a;
    int b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    if (a > b) {
        printf("smaller %d",b);
    }
    else {
        printf("larger %d",a);
    }
    return 0;

}
