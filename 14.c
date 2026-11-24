//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int a;
    printf("ENTER A NUMBER: ");
    scanf("%d",&a);
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}
