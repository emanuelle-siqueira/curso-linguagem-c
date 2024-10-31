#include <stdio.h>
#include <stdlib.h>
#define TAM 2

int main(){

    // Definindo os vetores de várias formas
    int vetorInt[] = {1,2,3,4};
    float vetorFloat[3] = {1.5, 2.2, 3.0};
    char vetorChar[TAM] = {'a', 'b'};

    // Modificando valor por atribuição
    vetorInt[0] = 9;

    // Modificando valor com variável
    float novoValor = 5.0;
    vetorFloat[2] = novoValor;

    // Modificando valor com usuário
    printf("Digite uma letra nova:");
    fflush(stdin); //limpando o buffer do teclado
    scanf("%c", &vetorChar[0]); 

    // Imprimindo vetores
    printf("\nVetor 1: \n");
    for(int i = 0; i < 4; i++){
        printf("%d \n", vetorInt[i]);
    }

    
    printf("\nVetor 2: \n");
    for(int i = 0; i < 3; i++){
        printf("%f \n", vetorFloat[i]);
    }

    printf("\nVetor 3: \n");
    for(int i = 0; i < TAM; i++){
        printf("%c \n", vetorChar[i]);
    }

    // Lendo valores para todo o vetor e
    printf("\n Digite inteiros \n");
    for(int i = 0; i < 4; i++){
        printf("Lendo um vetor[%d]:", i);
        scanf("%d", &vetorInt[i]);
    }

    //Imprimindo este vetor atualizado
    for(int i = 0; i < 4; i++){
        printf("%d \n", vetorInt[i]);
    }

    return 0;
}