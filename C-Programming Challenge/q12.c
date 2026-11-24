//
// Created by KIIT on 22-11-2026.
//

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int largest =  a>b?(a>c?a:c):(b>c?b:c);
    printf("The Largest Number %d", largest);
}

