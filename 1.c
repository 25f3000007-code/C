//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    int centi ;
    printf("Enter the centi: ");
    scanf("%d",&centi);
    float frh = centi * 0.18 + 32;
    printf("The value of frh is: %.2f",frh);
}
