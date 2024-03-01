// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "ab.h"

pNodoA* InsereArvore(pNodoA *a, int ch){
	if(a == NULL){
		a = (pNodoA*) malloc(sizeof(pNodoA));
		a->info = ch;
		a->esq = NULL;
		a->dir = NULL;
	}
	else if(ch < a->info){
		a->esq = InsereArvore(a->esq,ch);
	}
	else{
		a->dir = InsereArvore(a->dir,ch);
	}
	
	return a;
}

void PreFixado(pNodoA *a){
	if (a!= NULL){
		//printf("%d\n",a->info);
		PreFixado(a->esq);
		PreFixado(a->dir);
	}
}

int ContaNodos(pNodoA *arvore){
	if(arvore != NULL)
		return 1 + ContaNodos(arvore->esq) + ContaNodos(arvore->dir);
	else return 0;
}

int Altura(pNodoA *a){
	int Alt_Esq, Alt_Dir;
	if (a == NULL)
		return 0;
	else{
		Alt_Esq = Altura (a->esq);
		Alt_Dir = Altura (a->dir);
		if (Alt_Esq > Alt_Dir)
			return (1 + Alt_Esq);
		else
			return (1 + Alt_Dir);
	}
}

int CalcFator(pNodoA *a){
	return abs(Altura(a->esq) - Altura(a->dir));
}


void Fator(pNodoA *a, int *fator){
	int fatorBalanceado;
	
	if(a){
		fatorBalanceado = CalcFator(a);
		if(fatorBalanceado > *fator){
			*fator = fatorBalanceado;
		}
		Fator(a->esq, fator);
		Fator(a->dir, fator);
	}
}

void DesenhaArvore(pNodoA *arvore, int nivel){
	int cont;
	
	if(arvore != NULL){
		for(cont = 1; cont <= nivel; cont++){
			printf("=");
		}
		printf("%d\n", arvore->info);
		
		if(arvore->esq != NULL) DesenhaArvore(arvore->esq, nivel + 1);
		if(arvore->dir != NULL) DesenhaArvore(arvore->dir, nivel + 1);
	}
}
