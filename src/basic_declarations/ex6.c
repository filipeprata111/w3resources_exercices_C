//Write a C program to compute the perimeter and area of a circle with a given radius.
#include <stdio.h>

int main(){
    int radius = 6;
    float area, perimeter;
    perimeter = 2 * 3.14 * radius;
    area = 2 * radius * radius;
    printf("The perimeter of the circle is : %.3f inches\n", perimeter);
    printf("the area of the circle is : %.3f inches", area);
    return 0;
}