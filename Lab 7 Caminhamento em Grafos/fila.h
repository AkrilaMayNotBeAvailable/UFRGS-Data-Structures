#include <stdio.h>
#include <string.h>
#include <stdlib.h> //necessaria para o malloc
/* Code developed for Data Structures course at Federal University of Rio Grande do Sul.
	-- Implementation basic query algorithm
	> Create
	> Check if empty
	> Remove from
	> Print

	Github: AkrilaMayNotBeAvailable
*/

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


