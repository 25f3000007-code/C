//
// Created by KIIT on 23-11-2026.
//
#include<stdio.h>
int main() {
    int n;
    int i;
    printf("Enter a number: ");
    scanf("%d",&n);

    if (n > 0)
    {
        i = 0;
    }
    else if (n < 0)
    {
        i = 1;
    }
    else {
        i = 2;
    }

    switch (i)
    {
        case 0: printf("+ve");
            break;
        case 1: printf("-ve");
            break;
        case 2: printf("0");
            break;
    }
    return 0;
}