//
// Created by KIIT on 20-11-2026.
//
/*Convert a total integer count of days into full years (365 days), weeks (7 days), and remaining days.*/

#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of days: ");
    scanf("%d",&n);
    int year = n/365;
    int weeks = (n%365)/7;
    int days = (n%365)%7;

    printf("%d years, %d weeks, %d days.\n",year,weeks,days);
}