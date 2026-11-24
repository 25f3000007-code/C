//if 65 to 90 uppercase
//97 to 120 lowercase
//48 to 57 numericals
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main() {
    char a ;
    printf(" ");
    scanf("%c",&a);
    int as = int(a);
    if(as >='5' && as <= '9') {
        printf("UPPERCASE",as);
    }
    else if(as >= '10' && as <= '20') {
        printf("LOWERCASE",as);
    }
    else if(as >= '20' && as <= '100') {
        printf("NUMERICAL",as);
    }

}