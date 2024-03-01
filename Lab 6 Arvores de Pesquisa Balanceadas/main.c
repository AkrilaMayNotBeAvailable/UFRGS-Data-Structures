// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "ab.h"

int main(){
	pNodoA *a = NULL;
	pNodoA *b = NULL;
	pNodoA *c = NULL;
	pNodoA *d = NULL;
	int fatA = 0;
	int fatB = 0;
	int fatC = 0;
	int fatD = 0;
	
	a = InsereArvore(a, 12);
	a = InsereArvore(a, 8);
	a = InsereArvore(a, 20);
	a = InsereArvore(a, 4);
	a = InsereArvore(a, 10);
	a = InsereArvore(a, 18);
	a = InsereArvore(a, 26);
	a = InsereArvore(a, 2);
	a = InsereArvore(a, 6);
	a = InsereArvore(a, 9);
	a = InsereArvore(a, 11);
	a = InsereArvore(a, 14);
	a = InsereArvore(a, 19);
	a = InsereArvore(a, 22);
	a = InsereArvore(a, 28);


	DesenhaArvore(a, 0);
	Fator(a, &fatA);
	printf("\nFator de A: %d\n", fatA);
	
	b = InsereArvore(b, 12);
	b = InsereArvore(b, 8);
	b = InsereArvore(b, 20);
	b = InsereArvore(b, 4);
	b = InsereArvore(b, 10);
	b = InsereArvore(b, 18);
	b = InsereArvore(b, 26);
	b = InsereArvore(b, 2);
	b = InsereArvore(b, 6);
	b = InsereArvore(b, 9);
	b = InsereArvore(b, 14);
	b = InsereArvore(b, 19);
	b = InsereArvore(b, 22);
	b = InsereArvore(b, 28);

	DesenhaArvore(b, 0);
	Fator(b, &fatB);
	printf("\nFator de B: %d\n", fatB);
	
	c = InsereArvore(c, 12);
	c = InsereArvore(c, 8);
	c = InsereArvore(c, 20);
	c = InsereArvore(c, 4);
	c = InsereArvore(c, 10);
	c = InsereArvore(c, 18);
	c = InsereArvore(c, 2);
	c = InsereArvore(c, 6);
	c = InsereArvore(c, 11);
	c = InsereArvore(c, 14);
	c = InsereArvore(c, 19);


	DesenhaArvore(c, 0);
	Fator(c, &fatC);
	printf("\nFator de C: %d\n", fatC);
	
	d = InsereArvore(d, 12);
	d = InsereArvore(d, 20);
	d = InsereArvore(d, 18);
	d = InsereArvore(d, 14);
	d = InsereArvore(d, 19);


	DesenhaArvore(d, 0);
	Fator(d, &fatD);
	printf("\nFator de D: %d\n", fatD);

	return 0;
}
