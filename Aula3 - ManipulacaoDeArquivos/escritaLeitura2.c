#include <stdio.h>
int main() {
    FILE *arquivo = fopen("exemplo.txt", "r");
    char texto[30];

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    while(fgets(texto,30,arquivo)){
        printf("texto lido: %s\n", texto);
    }
 
    fclose(arquivo);

    return 0;
}
