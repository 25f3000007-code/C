//
// Created by KIIT on 23-11-2026.
//

#include <stdio.h>

int findSmallest(int arr[], int n) {
    int small = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    return small;
}

int findLargest(int arr[], int n) {
    int large = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }

    return large;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, n);
    int largest = findLargest(arr, n);

    int difference = largest - smallest;

    printf("Smallest number = %d\n", smallest);
    printf("Largest number = %d\n", largest);
    printf("Difference = %d\n", difference);

    if (difference % 2 != 0) {
        printf("Difference is ODD");
    }
    else {
        printf("Difference is EVEN");
    }

    return 0;
}
