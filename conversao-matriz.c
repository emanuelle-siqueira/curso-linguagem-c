#include <stdio.h>
#include <stdlib.h>

void main(){

    /*
    preencha uma matriz 2x2 lendo valores do usuario e
    depois troque os valores entre a primeira e a segunda linha.
    */

    int minhaMatriz[2][2], temp1, temp2;

    //lendo matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &minhaMatriz[i][j]);
        }
    }
    //auxiliares
    temp1 = minhaMatriz[0][0];
    temp2 = minhaMatriz[0][1];

    minhaMatriz[0][0] = minhaMatriz[1][0];
    minhaMatriz[0][1] = minhaMatriz[1][1];
    minhaMatriz[1][0] = temp1;
    minhaMatriz[1][1] = temp2;

    //impressão nova matriz
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", minhaMatriz[i][j]);
        }
        printf("\n");
    }
   
    /*
    [1] [2] -> [0] [0] - [0] [1]
    [3] [4] -> [1] [0] - [1] [1]
    */
   
}