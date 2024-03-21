#include <stdio.h>


int main() {

    FILE *arq = fopen("exemplo.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1; // Indica que houve um erro ao abrir o arquivo
    }

    fclose(arq);

    return 0;
}
