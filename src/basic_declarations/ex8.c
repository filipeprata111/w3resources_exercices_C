//Write a C program to convert specified days into years, weeks and days.
#include <stdio.h>

int main(){
    int anos, semanas, dias;
    dias = 1329;
    anos = dias/365;
    semanas = (dias % 365)/7;      
    dias = dias - ((anos*365) + (semanas*7));
    printf("valor dado:  1329...equivale...\n");
    printf("anos: %i\nsemanas: %i\ndias: %i \n", anos, semanas, dias);
    return 0;
}