// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "ab.h"

int main(){
	pNodoA *arvore = NULL;
	arvore = InsereArvore(arvore, 8);
	arvore = InsereArvore(arvore, 4);
	arvore = InsereArvore(arvore, 9);
	arvore = InsereArvore(arvore, 2);
	arvore = InsereArvore(arvore, 6);
	arvore = InsereArvore(arvore, 1);
	
	PreFixado(arvore);
	printf("\nQuantidade de nodos: %d\n", ContaNodos(arvore));
	DesenhaArvore(arvore, 1);
	

	return 0;
}
