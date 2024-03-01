// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "data.h"


// LeData : ptr_Data -> void
// Dado um tipo ponteiro para Data, solicita ao usuário dados para
// preencher a estrutura utilizada no parâmetro.
void LeData(Data *d){
	printf("Dia: "); 
	scanf("%d",&d->dia);
	
	printf("Mes: "); 
	scanf("%d",&d->mes);
	
	printf("Ano: "); 
	scanf("%d",&d->ano);
}

// ValidaData : Data -> int
// Dado um tipo data, verifica se o mesmo é válido como uma data
// Retorna falso (0) caso não se encaixe no padrão e verdadeiro (1)
// se estiver tudo certo.
int ValidaData(Data d){
	if((d.dia >31) || (d.ano>2100) || (d.mes>12)){
		return 0;
	} else {
		return 1;
	}
}
// ImprimeData : Data -> void
// Dado um tipo data, 
// imprime no console a data passada como parametro.
void ImprimeData(Data d){
	printf("%d/%d/%d\n", d.dia, d.mes, d.ano);
}

// CalculaDias : Data Data -> int
// Dadas duas datas calcula a diferença de dias 
// considerando a primeira como base entre elas.
// Retorna um inteiro indicando a diferença
int CalculaDias(Data primeira, Data segunda){
	int dias = 0;
	int diasPrimeira = 0;
	int diasSegunda = 0;
	
	diasPrimeira = primeira.dia + (primeira.mes * MES) + (primeira.ano * ANO);
	diasSegunda = segunda.dia + (segunda.mes * MES) + (segunda.ano * ANO);
	
	dias = diasPrimeira - diasSegunda;
	
	return abs(dias);
}

// CalculaPascoa : int -> Data
// Dado um ano, retorna a data da Pascoa naquele ano
Data CalculaPascoa(int ano){
	Data pascoa = { 0 };
	int c, n, k, i, j, l, m, d = 0;
	
	c = ano / 100;
	n = ano - (19 * (ano / 19));
	k = (c - 17) / 25;
	i = c - c / 4 - ((c - k) / 3) + (19 * n) + 15;
	i = i - (30 * (i / 30));
	i = i - ((i / 28) * (1 - (i / 28)) * (29 / (i + 1)) * ((21 - n) / 11));
	j = ano + (ano / 4) + i + 2 - c + (c / 4);
	j = j - (7 * ( j / 7));
	l = i - j;
	m = 3 + ((l + 40) / 44);
	d = l + 28 - (31 * (m / 4));
	
	pascoa.dia = d;
	pascoa.mes = m;
	pascoa.ano = ano;

	return pascoa;
}
