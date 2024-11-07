/* São vetores multidimensionais, ou seja, conjunto de vetores agrupados em um tipo de variável
São usados para representar tabuleiros*/
#include <stdio.h>

int main(){

    int vetor[2][2];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &vetor[i][j]);
        }
        //printf("\n");
    }
    
    //int vetor[2][2] = {{1,2},{3,4}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", vetor[j][i]);
        }
        printf("\n");
    }

    return 0;
}