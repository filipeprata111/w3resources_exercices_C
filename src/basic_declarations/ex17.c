//Write a C program to calculate the distance between two points.
//Test Data :
//Input x1: 25
//Input y1: 15
//Input x2: 35
//Input y2: 10
//formula = (x2-x1)^2 + (y2-y1)^2

#include <stdio.h>
#include <math.h> 
int main(){
    double x1, x2, y1, y2;

    printf("x1 value? ");
    scanf("%lf", &x1);
    printf("x2 value? ");
    scanf("%lf", &x2);
    printf("y1 value? ");
    scanf("%lf", &y1);
    printf("y2 value? ");
    scanf("%lf", &y2);
    
    double distanceF = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("the distance between the points is %lf", sqrt(distanceF));

    return 0;
}
