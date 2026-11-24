//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int m;
    int a;
    printf("no. : ");
    scanf("%d",&m);
    if(m > 0) {
        a = 1;
    }
    else if(m < 0) {
        a = 2;
    }
    else {
        a = 3;
    }
    switch(a) {
        case 1: printf("+ve");
            break;
            case 2: printf("-ve");
            break;
            case 3: printf("lund");
            break;
    }
    return 0;
}