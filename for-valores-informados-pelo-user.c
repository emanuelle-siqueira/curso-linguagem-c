#include <stdio.h>

int main(){
    
    int valorInicial, valorFinal, passos;

    scanf("%d %d %d", &valorInicial, &valorFinal, &passos);

    for(int i = valorInicial; i <= valorFinal; i = i + passos){
        printf("%d\n", i);
    }
    return 0;
}