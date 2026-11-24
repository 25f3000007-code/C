//
// Created by KIIT on 23-11-2026.
//
#include <stdio.h>


int main () {
    char str1[100];
    char str2[100];

    scanf("%s", str1);
    scanf("%s", str2);
    int i=1;
    int str_len1 = 0;

    char ck = str1[0];
    while (ck != '\0') {
        str_len1++;
        ck = str1[i];
        i = i + 1;
    }

    printf("Length of the string is: %d\n", str_len1);
    int k = 0;
    for (int x = str_len1; x > 0; x++) {
        str1[x] = str2[k];
        if (str2[k] == '\0') {
            break;
        }
        k = k + 1;

    }
    printf("%s", str1);
}
