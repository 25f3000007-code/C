//
// Created by KIIT on 23-11-2026.
//

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            printf("Arrays are NOT same\n");
            printf("First mismatched elements: %d and %d",
                   a[i], b[i]);

            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        printf("Arrays are SAME");
    }

    return 0;
}
