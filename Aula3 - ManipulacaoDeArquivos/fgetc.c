#include <stdio.h>

int main() {

    int caractere;

    FILE *arquivo = fopen("exemplo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }
    fclose(arquivo);
    return 0;
}
