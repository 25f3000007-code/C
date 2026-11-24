//
// Created by KIIT on 20-11-2026.
//
/*Description: Calculate Simple Interest and
 *annually compounded Compound Interest given
 *Principal $P$, Rate $R$, and Time $T$.*/
#include<stdio.h>
#include<math.h>

int main() {
    float principle;
    float rate;
    int time;
    printf("Enter the Principle:  ");
    scanf("%f",&principle);
    printf("Enter the Rate:  ");
    scanf("%f",&rate);
    printf("Enter the Time:  ");
    scanf("%d",&time);
    float simple_interest = (principle * rate * time)/100;
    printf("Simple Interest is %.2f\n",simple_interest);
    float compound_interest;
    compound_interest = principle * pow(1+ rate/100, time);
    printf("Compound Interest is %.2f\n",compound_interest);
    return 0;
}

