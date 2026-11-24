//
// Created by KIIT on 24-11-2026.
//
#include <stdio.h>

int min_array(int arr[10]) {
    int min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The Minimum Number in array %d", min_array(arr));
    return 0;
}