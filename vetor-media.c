#include <stdio.h>

/* Algoritmo que lê 3 valores para um vetor de 3
posições e depois calcule a média dos valores 
acessando o vetor. */


int main(){

    /*float vetor[3];
    float soma = 0, media;
    

    for (int i = 0; i < 3; i++){
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i]; 
        
    }
    media = soma / 3;
    printf("%.1f", media);
*/

    int tamanho;
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;

    int i;
    for (i = 0; i < tamanho; i++){
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    } for ( i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }
    printf("\nA mádia dos valores é: %.2f", soma/tamanho);
    
    
    return 0;
}