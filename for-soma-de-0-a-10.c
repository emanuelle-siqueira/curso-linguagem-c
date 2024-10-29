#include <stdio.h>

int main(){
    int soma = 0;

    for(int i = 0; i < 10; i++){
        printf("i = %d (Soma: %d) \n", i, soma);

        soma += i;
    }

    printf("Soma: %d", soma);

    return 0;
}