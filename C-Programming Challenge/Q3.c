//
// Created by KIIT on 16-11-2026.
//

#include <stdio.h>
int a;
int b;
int main() {
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}