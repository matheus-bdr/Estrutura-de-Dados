#include <stdio.h>

int main()
{
    int tmp;
    int vetor[] = {50, 10, 2, 3, 42, 100, 0, 1, 7, 9};

    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9 - j; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                tmp = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
}