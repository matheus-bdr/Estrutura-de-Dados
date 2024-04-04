#include <stdio.h>

int main()
{
    int tmp;
    int vetor[] = {50, 10, 2, 3, 42, 100, 0, 1, 7, 9};
    int temAlgumValorDesordenado= 0 ;

    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9 - j; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                tmp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = tmp;
                temAlgumValorDesordenado = 1;
            }
        }
        if(temAlgumValorDesordenado){
            printf("O array está ordenado");
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
}