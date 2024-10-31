#include <stdio.h>

/* variavel = UM VALOR,     
   vetor[3]={UM VALOR, UM VALOR, UM VALOR}
   int vetor[3] = {10,  25, 70}
        Posição:    0    1   2*/
   

/*  >> Sem definir tamanho
    int vetor[] = {1,2,3,4}

    >> Definindo tamanho
    float vetor[3] = {1.5, 2.2, 3.0}

    >> Definindo tamanho com variável/constante
    char vetor[TAM] = {'a','b','c'}

    >> Mistura tipos >> NÃO PODE
    int vetor[2] = {1, 4.5}

    >> Misturar tipos >> NÃO PODE
    float vetor[3] = {'a', 4.5}   */

    /* 
    >> Atribuir valores a um vetor já criado:
    vetor[X] = 10;
    
    >> Receber um valor de um vetor, jã criado:
    int variavel = vetor[X];
    
    >> Ler um valor dentro de uma posição do vetor:
    scanf("%d", &vetor[X]);
    
    >> Imprimir um valor de uma posição do vetor:
    printf("%d", &vetor[X]); */

    /* Para IMPRIMIR todo os valores de um vetor na tela
    será preciso um FOR e uma variável auxiliar i 
    e uma constante TAM com o tamanho do vetor.*/

#define TAM 5

int main(){

    int vetor[TAM] = {1, 2, 3, 4, 5};

    int i = 0;

    for(i = 0; i < TAM; i++){
        printf("%d\n", vetor[i]);
    }
     
}