// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //necessaria para o malloc

#define SIZE 6 // Constante para definir o tamanho grafo

struct sTipoFila{
	int info;
	struct sTipoFila* prox;
};

typedef struct sTipoFila TipoFila;

TipoFila* cria_fila(void);
TipoFila* insere (TipoFila *l, int dado);
int vazia (TipoFila* l);
int removeFila(TipoFila **l);
void imprime(TipoFila* l);


