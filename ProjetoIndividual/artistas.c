#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Artista {
    char nome[50];
    char genero_musical[50];
    char nascimento_endereco[50];
    char albums[50][50]; // Alterado para uma matriz de strings para armazenar vários álbuns
    int num_albums; // Adicionado para manter o número de álbuns
} Artista;

void inserirArtistaOrdenado(Artista artistas[], int *num_artistas, Artista novo_artista) {
    int i = *num_artistas - 1;
    while (i >= 0 && strcmp(artistas[i].nome, novo_artista.nome) > 0) {
        strcpy(artistas[i + 1].nome, artistas[i].nome);
        strcpy(artistas[i + 1].genero_musical, artistas[i].genero_musical);
        strcpy(artistas[i + 1].nascimento_endereco, artistas[i].nascimento_endereco);
        for (int j = 0; j < artistas[i].num_albums; j++) {
            strcpy(artistas[i + 1].albums[j], artistas[i].albums[j]);
        }
        artistas[i + 1].num_albums = artistas[i].num_albums;
        i--;
    }
    strcpy(artistas[i + 1].nome, novo_artista.nome);
    strcpy(artistas[i + 1].genero_musical, novo_artista.genero_musical);
    strcpy(artistas[i + 1].nascimento_endereco, novo_artista.nascimento_endereco);
    for (int j = 0; j < novo_artista.num_albums; j++) {
        strcpy(artistas[i + 1].albums[j], novo_artista.albums[j]);
    }
    artistas[i + 1].num_albums = novo_artista.num_albums;

    (*num_artistas)++;
}

int main() {
    Artista artistas[100];
    int num_artistas = 0;

    FILE *arquivo_artistas = fopen("artistas.txt", "r");

    if (arquivo_artistas == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[50];
    Artista novo_artista;

    while (fgets(linha, sizeof(linha), arquivo_artistas)) {
        if (strcmp(linha, "==========\n") == 0) {
            inserirArtistaOrdenado(artistas, &num_artistas, novo_artista);
            novo_artista.num_albums = 0;
        } else {
            linha[strcspn(linha, "\n")] = '\0'; // Remover o caractere de nova linha
            switch (novo_artista.num_albums % 4) {
                case 0:
                    strcpy(novo_artista.nome, linha);
                    break;
                case 1:
                    strcpy(novo_artista.genero_musical, linha);
                    break;
                case 2:
                    strcpy(novo_artista.nascimento_endereco, linha);
                    break;
                default:
                    strcpy(novo_artista.albums[novo_artista.num_albums / 4], linha);
                    novo_artista.num_albums++;
                    break;
            }
        }
    }

    fclose(arquivo_artistas);

    // Exibir os artistas
    printf("Lista de artistas:\n");
    for (int i = 0; i < num_artistas; i++) {
        printf("Nome: %s\n", artistas[i].nome);
        printf("Genero Musical: %s\n", artistas[i].genero_musical);
        printf("Nascimento/Endereco: %s\n", artistas[i].nascimento_endereco);
        printf("Albuns:\n");
        for (int j = 0; j < artistas[i].num_albums / 4; j++) {
            printf("  %s\n", artistas[i].albums[j]);
        }
        printf("===========\n");
    }

    return 0;
}
