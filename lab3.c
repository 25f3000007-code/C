//
// Created by KIIT on 23-11-2026.
//

#include <stdio.h>
int main() {
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a >= 90) {
        printf("Grade A");
    }
    else if (a >= 80) {
        printf("Grade B");
    }
    else if (a >= 70) {
        printf("Grade C");
    }
    else if (a >= 60) {
        printf("Grade D");
    }
    else if (a >= 50) {
        printf("Grade E");
    }
    else {
        printf("Fail");
    }
}