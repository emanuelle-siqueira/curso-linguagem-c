#include <stdio.h>

int main(){
    printf("USANDO WHILE: \n");
    int i = 10;

    while(i >= 0){
        printf("%d \n", i);
        i--;
    }

    printf("\nUSANDO DO-WHILE: \n");

    i = 10;
    do{
        printf("%d \n", i);
        i--;
    } while (i >= 0);

    printf(" \nUSANDO FOR: \n");

    for(int i = 10; i > 0; i--){
        printf("%d \n", i);
    }
}