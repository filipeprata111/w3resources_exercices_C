//write a program that takes 2 integer's from the user and print the product of the 2 integer
#include <stdio.h>

int main(){
    int num1, num2;
    printf("input number 1:");
    scanf("%i", &num1);
    printf("input number 2:");
    scanf("%i", &num2);
    printf("the product of the integers is : %i", num1*num2);
    return 0;
}