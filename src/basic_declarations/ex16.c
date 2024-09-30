//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) 
//travelled (in km) and spent fuel (in litters, float number – 2 decimal points).

#include <stdio.h>

int main(){
    float averageConsumption;
    int totalDistance;
    printf("total distance in km?: ");
    scanf("%d", &totalDistance);
    printf("total fuel consumption?: ");
    scanf("%f", &averageConsumption);
    printf("average consumption is %.3f \n", totalDistance / averageConsumption);
    return 0;
}