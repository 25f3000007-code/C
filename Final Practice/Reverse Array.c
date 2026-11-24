//
// Created by KIIT on 24-11-2026.
//
#include <stdio.h>
void reverse_array(int arr[10]) {

    int reversed_array[10];
    int key = 0;
    for (int i = 10 - 1; i >= 0; i--) {
        reversed_array[key] = arr[i];
        key++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", reversed_array[i]);
    }
}

int main() {
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The Reversed Array is: ");
    reverse_array(arr);
}