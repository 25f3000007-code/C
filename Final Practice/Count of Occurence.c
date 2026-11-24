//
// Created by KIIT on 24-11-2026.
//
#include <stdio.h>
int count(int arr[15], int element) {
    int count = 0;
    for (int i = 0; i < 15; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[15];
    printf("Enter 15 numbers: ");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 15; i++) {
        printf("Count of occurrence of %d is %d\n", arr[i], count(arr, arr[i]));
    }


}
