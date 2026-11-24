//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>
int main () {
    int a;
    int i;
    int count;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&a);

    for (i=1;i<=a;i++) {
        if (a%i==0) {
            count++;
        }
    }
        if (count==2) {
            printf("%d is a prime number",a);
        }
        else if (count > 2) {
            printf("%d is a compositie number",a);
        }
        else {
            printf("%d is a non prime number",a);
        }




    return 0;
}
