#include <stdio.h>
//
// Created by KIIT on 24-11-2026.
//
int sar(int noob[0]) {
    int min = noob[0];
    for (int i = 1; i < 10; i++) {
        if (min > noob[i]) {
            min = noob[i];
        }
    }
}
int main() {
    int aadi[10] = {};
    printf("ENTER NO. ");
    for (int i = 1; i < 5; i++) {
        scanf("%d", &aadi[i]);
    }

    printf("%d\n", sar(aadi));

    return 0;
}