#include <ctype.h>
#include <stdio.h>
//
// Created by KIIT on 23-11-2026.
//
int main() {
    char x;
    scanf("%c",&x);
    int as = (int) x;

    printf("%d", as);

    if (48 >= as && as >= 57) {
        printf("Numerical");
    }
    else if (97 >= as && as >= 122) {
        printf("Lowercase letter");
    }
    else if (65 >= as && as >= 90) {
        printf("Uppercase letter");
    }

}