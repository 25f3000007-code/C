//
// Created by KIIT on 16-11-2026.
//
/*Data Type Sizes asks you to write a program that queries the C compiler for how many bytes of RAM each fundamental data type consumes on your specific machine, and prints those numbers.*/


#include <stdio.h>

int main() {
    printf("char= %zu", sizeof(char));
    printf("int= %zu", sizeof(int));
    printf("float= %zu", sizeof(float));
    printf("double= %zu", sizeof(double));
    printf("long= %zu", sizeof(long));
    printf("long long= %zu", sizeof(long long));
    printf("long double= %zu", sizeof(long double));
}