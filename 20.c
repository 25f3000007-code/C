//
// Created by KIIT on 23-11-2026.
//
#include<stdio.h>
int main(){
int a;
int i;
int count=0;
printf("Enter a number: ");
scanf("%d",&a);

for (i = 1; i <= a; i++) {
    if (a % i == 0)
    { {count++;}
    }
}
printf("%d",count);
return 0;
}