//a program that gets the version of c that you are using
#include <stdio.h>
int main(){
    if(__STDC_VERSION__ >= 201710L){
        printf("we are using the c17!");
    }else if (__STDC_VERSION__ >= 201112L){
        printf("we are using the c11!");
    }else if(__STDC_VERSION__ >= 199901L){
        printf("we are using the c99!");
    }else{
        printf("we are using the c89/90!");
    }

    return 0;
}