//
// Created by KIIT on 20-11-2026.
//

#include <stdio.h>
int main() {
    int digit = 3214;
    printf("%d\t", (digit/1000));
    printf("%d\t", (digit/100)%10);
    printf("%d\t", (digit/10)%10);
    printf("%d\t", (digit%10));

    return 0;
}
