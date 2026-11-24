//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>

void insert(int arr[], int n, int pos, int element) {

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;

    printf("Array after insertion: ");

    for (int i = 0; i <= n; i++) {

        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[100], n, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    insert(arr, n, pos, element);

    return 0;
}