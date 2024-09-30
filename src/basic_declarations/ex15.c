//Write a C program that accepts three integers and finds the maximum of three.
//Test Data :
//Input the first integer: 25
//Input the second integer: 35
//Input the third integer: 15

#include <stdio.h>

void compara(int first, int second, int third);

int main(){
    int firstInt, secondInt, thirdInt;
    printf("firstInt?: ");
    scanf("%d", &firstInt);
    printf("secondInt?: ");
    scanf("%d", &secondInt);
    printf("thirdInt?: ");
    scanf("%d", &thirdInt);
    compara(firstInt, secondInt, thirdInt);
    return 0;
}

void compara(int first, int second, int third){
    if(first > second && first > third){
        printf("maximun value of three integer is %d", first);
    }else if(second > third){
        printf("maximun value of the three integer is %d", second);
    }else{
        printf("maximun value three integer is %d", third);
    }
}