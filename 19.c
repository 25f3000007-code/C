//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int n;
    int i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("factors of %d are : ",n);
    for (i = 1; i <= n; i++) {
        if (n%i == 0) {
            printf("%d",i);
        }
    }
    return 0;
}
