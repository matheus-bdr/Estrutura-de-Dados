#ifndef FIMES_H
#define FIMES_H

typedef struct Filme Filme;

struct Filme* criaLista(int numFilme);
void listarFilme(Filme *lista);
void adicionarFilme(Filme *lista, Filme filme);
int buscarFilme(Filme *lista, int nomFilme);
void removerFilme(Filme *lista, int nomFilme);

#endif