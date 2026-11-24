//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int n;
    int i;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    printf("%d",sum);
    return 0;
}