#include <stdio.h>

int main(){

    int i, valor, temp = 0;
    scanf("%d", &valor);

    for(i = 1; i  <= valor; i++){
        if (valor % i == 0){
            temp++;
        }
        //printf("%d / %d tem o resto =  %d\n",valor, i, valor % i);   
    }

    if(temp == 2){
        printf("o numero eh primo\n");
    } else {
        printf("nao eh primo\n");
    }
}