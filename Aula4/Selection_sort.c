#include <stdio.h>

int main()
{
    int tmp;
    int vetor[] = {50, 10, 2, 3, 42, 100, 0, 1, 7, 9};
    int maior = -1;
    int posicaoMaiorValor = -1;
    int j = 9;
    for (int j = 9; j >= 0; j--)
    {
        int maior = -1;
        for (int i = 0; i < 9; i++)
        {
            if (vetor[i] > maior)
            {
                posicaoMaiorValor = i;
                maior = vetor[i];
            }
        }
    }

    tmp = vetor[posicaoMaiorValor];
    vetor[posicaoMaiorValor] = vetor[j];
     vetor[j]= tmp ;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
}