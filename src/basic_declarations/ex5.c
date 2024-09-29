//Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
//P=2×(L+W) is the formula. h(altura) X w(largura)

#include <stdio.h>

int main(){
    int l;
    int w;
    printf("height?: ");
    scanf("%i", &l);
    printf("width7?: ");
    scanf("%i", &w);
    printf("Perimeter of the retangle: %i\n", 2 * (l + w));
    printf("Area of the retangle: %i ", l * w);
    return 0;
}