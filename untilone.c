#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    while (sum > 9) {
        int temp = sum;
        sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
    }

    printf("%d", sum);

    return 0;
}