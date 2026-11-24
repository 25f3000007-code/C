//
// Created by KIIT on 23-11-202
#include <stdio.h>
int main () {
    float marks;
    printf("marks = ");
    scanf("%f",&marks);

    if(marks >= 90) {
        printf("grade = A");
    }
    else if (marks >= 80) {
        printf("grade = B");
    }
    else if (marks >= 70) {
        printf("grade = C");
    }
    else if (marks >= 60) {
        printf("grade = D");
    }
    else if (marks >= 50) {
        printf("grade = E");
    }
    else  {
        printf("grade = F");
    }

    return 0;
}