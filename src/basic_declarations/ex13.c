#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("num1 value:");
    scanf("%d", &num1);
    printf("num2 value:");
    scanf("%d", &num2);
    printf("num3 value:");
    scanf("%d", &num3);

    if(num1>num2 && num1 >num3){
        printf("num1 %d is greater", num1);
    }else if(num2>num3){
        printf("num2 %d is greater", num2);
    }else{
        printf("num3 %d is greater", num3);
    }
    getchar();
    printf("\nPressione Enter para sair...");

    getchar();
    return 0;
}