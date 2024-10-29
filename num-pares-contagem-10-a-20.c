#include <stdio.h>

int main(){
    printf("USANDO WHILE.. \n");
    int i = 10;

    while(i <= 20){
        if (i % 2 == 0){
           printf("%d \n", i);
            
        }
        i++; 
    }

    printf("\nUSANDO DO-WHILE... \n");

    i = 10;
    do{
        //printf("%d \n", i);
        if (i % 2 == 0){
           printf("%d \n", i);
        }
        i++;
    } while (i <= 20);

    printf(" \nUSANDO FOR.. \n");

    for(int i = 10; i <= 20; i++){
        if (i % 2 == 0){
           printf("%d \n", i);
            
        }
        i++;
    }

    return 0;
}