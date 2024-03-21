#include <stdio.h>
int main() {
    FILE *arquivo = fopen("exemplo.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    char *mensagem = "hello, world!";
    fputs(mensagem, arquivo);
    fclose(arquivo);
    return 0;

}

