#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filmes.h"

typedef struct Filme {
    char nome[50];
    float anoLancamento;
    char diretor[50];
}Filme;

int ultimaPosLivre = 0;

typedef struct Filme* criaLista(int numFilme){

}criaLista;

typedef void adicionarFilme(struct Filme *lista, struct Filme filme){
   
}

typedef void listarFilme(struct Filme *lista){

}

typedef int buscarFilme(Filme *lista, int matricula){
   
}


 typedef void removerFilme(struct Filme* lista, int matricula){
    
}

int main(){
    struct Aluno *Filme;
    alunos = criaLista(10);

    struct Aluno aluno1, aluno2;
    strcpy(aluno1.nome, "joao");
    aluno1.idade = 20;
    aluno1.nota = 9.9;
    aluno1.matricula = 101010;

    strcpy(aluno2.nome, "eduarda");
    aluno2.idade = 22;
    aluno2.nota = 10;
    aluno2.matricula = 222222;

    adicionarAluno(alunos, aluno1);
    adicionarAluno(alunos, aluno2);

    listarAlunos(alunos);
    return 0;
}