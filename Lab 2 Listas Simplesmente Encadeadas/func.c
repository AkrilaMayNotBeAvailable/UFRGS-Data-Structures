// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "list.h"

// Cria uma lista null
TipoPtNo* Inicializa(void){
  return NULL;
}

// Informação
void ImprimeMenu(){
	printf("Informe uma opcao:\n");
	printf("1. Imprimir a lista\n");
	printf("2. Inserir um produto na lista\n");
	printf("0. Encerrar Programa\n\n");
}

// Imprime uma lista
void Imprime(TipoPtNo* ptLista){
  TipoPtNo* ptaux;
  if (ptLista == NULL)
    puts("lista vazia\n");
  else
    for(ptaux=ptLista; ptaux!=NULL; ptaux=ptaux->prox)
      printf("Codigo = %d Nome do produto = %s Valor = %.2f\n",
      ptaux->info.codigo,
      ptaux->info.nome,
      ptaux->info.preco);
}

// Solicita ao usuário para criar um produto:
void CriaProduto(TipoInfoNo *info){
  printf("Informe um código: ");
  scanf("%d", &info->codigo);
  
  printf("Informe um nome de produto: ");  
  scanf("%s", info->nome);
  fflush(stdin);
  
  printf("Informe um valor: ");  
  scanf("%f", &info->preco);
}

// Insere um produto em uma determinada posição na lista
TipoPtNo* InsereProduto(TipoPtNo* ptLista, TipoInfoNo produto){
	TipoPtNo *ant = NULL;
	TipoPtNo *ptaux = ptLista;
	TipoPtNo *novo;
	
	novo = (TipoPtNo*) malloc(sizeof(TipoPtNo));
	novo->info = produto;

	while(ptaux && ptaux->info.codigo < novo->info.codigo){
		ant = ptaux;
		ptaux = ptaux->prox;
	}
	
	if(ant){	
		ant->prox = novo;
	} else {
		ptLista = novo;
	}
	
	novo->prox = ptaux;
	
	return ptLista;
}

