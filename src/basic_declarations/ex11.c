//Write a C program that accepts two item's weight and number of purchases 
//(floating point values) and calculates their average value.

#include <stdio.h>

int main(){
    float weight1, weight2, qnt1, qnt2;
    printf("product 1 weight ?: ");
    scanf("%f", &weight1);
    printf("No. of item1:");
    scanf("%f", &qnt1);
    printf("product 2 weight ?: ");
    scanf("%f", &weight2);
    printf("No. of item2:");
    scanf("%f", &qnt2);
    printf("Average value: %f", ((weight1 * qnt1) + (weight2 * qnt2)) / (qnt1 + qnt2));
    return 0;
}