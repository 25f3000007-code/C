#include <stdio.h>
//
// Created by KIIT on 24-11-2026.
//
void myfunction(int mynumber[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", mynumber[i]);
    }
};
int main () {
    int mynumber[5] = {1, 2, 3, 4, 5};
    myfunction(mynumber);

}