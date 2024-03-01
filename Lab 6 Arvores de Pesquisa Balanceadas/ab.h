// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
//==========================================
// Inclusão de bibliotecas:
//==========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//==========================================
// Definições do programa:
//==========================================

//==========================================
// Declaração de estruturas e enums:
//==========================================
typedef struct TNodoA{
	int info;
	struct TNodoA *esq;
	struct TNodoA *dir;
} pNodoA;

//==========================================
// Funções utilizadas no programa:
//==========================================
pNodoA* InsereArvore(pNodoA *a, int ch);
int Altura(pNodoA *a);
int CalcFator(pNodoA *a);
void Fator(pNodoA *a, int *fator);
void PreFixado(pNodoA *a);
int ContaNodos(pNodoA *arvore);
void DesenhaArvore(pNodoA *arvore, int nivel);

