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
	printf("2. Imprimir a lista reversa\n");
	printf("3. Inserir um produto na lista\n");
	printf("4. Remover item da lista\n");
	printf("5. Destruir a lista\n");
	printf("0. Encerrar Programa\n\n");
}

// Imprime uma lista duplamente encadeada.
void Imprime(TipoPtNo *PtLista) {
	TipoPtNo *PtAux;
	if(PtLista == NULL){
		printf("Lista vazia!\n");
	} 
	else{
		PtAux = PtLista;

		// Confere se está no início da lista;
		while(PtAux->ant != NULL){
			PtAux = PtAux->ant;
		}
		
		printf("================================\n");
		printf("=Lista Impressa em ordem padrão=\n");
		printf("================================\n");
		
		// Imprime a lista
		do{
			printf("\tCodigo = %d Nome = %s Preco = %f\n",
			PtAux->info.codigo,
			PtAux->info.nome,
			PtAux->info.preco);
			PtAux = PtAux->prox;
		}while(PtAux != NULL);
		
		printf("\n"); // Quebra linha pra ficar bunitinho
	}
}
// Imprime uma lista duplamente encadeada ao contrário.
void ImprimeInvertida(TipoPtNo *PtLista){
	TipoPtNo *PtAux;
	if(PtLista == NULL){
		printf("Lista vazia!\n");
	}
	else{
		PtAux=PtLista;
		while(PtAux->prox != NULL){
			PtAux=PtAux->prox;
		}
		
		printf("=================================\n");
		printf("=Lista Impressa em ordem reversa=\n");
		printf("=================================\n");
		
		while(PtAux!=NULL){
			printf("\tCodigo = %d Nome = %s Preco = %f\n",
			PtAux->info.codigo,
			PtAux->info.nome,
			PtAux->info.preco);
			PtAux= PtAux->ant;
		}
		
		printf("\n"); // Quebra linha pra ficar bunitinho
	}
}

// Insere produto em uma lista duplamente encadeada por referência;
void InsereProduto(TipoPtNo **lista, TipoInfoNo produto){
	TipoPtNo *aux;
	TipoPtNo *novo;
	
	novo = (TipoPtNo*)malloc(sizeof(TipoPtNo));
	novo->info = produto;
	
	if(*lista == NULL){ // Primeiro elemento da lista
		novo->prox = NULL;
		novo->ant = NULL;
		*lista = novo;
	}
	else if(novo->info.codigo < (*lista)->info.codigo){ // Menor código
		novo->prox = *lista;
		(*lista)->ant = novo;
		*lista = novo;
	} 
	else {
		aux = *lista;
		while(aux->prox && aux->prox->info.codigo < novo->info.codigo) // Busca posição de onde deve ser colocado
			aux = aux->prox;
		novo->prox = aux->prox;
		
		if(aux->prox)
			aux->prox->ant = novo;
		novo->ant = aux;
		aux->prox = novo;
	}
}

// Remove um nodo da lista
TipoPtNo* Remover(TipoPtNo **lista, int codigo){
	TipoPtNo *aux;
	TipoPtNo *remover = NULL;
	
	if(*lista){
		if((*lista)->info.codigo == codigo){
			remover = *lista;
			*lista = remover->prox;
			if(*lista){
				(*lista)->ant = NULL;
			}
		}
		else{
			aux = *lista;
			while(aux->prox && aux->prox->info.codigo != codigo)
				aux = aux->prox;
			if(aux->prox){
				remover =  aux->prox;
				aux->prox = remover->prox;
				if(aux->prox){
					aux->prox->ant = aux;
				}
			}
		}
	}
	return remover;
}

// Destroi uma lista, (remove todos elementos)
TipoPtNo* Destroi(TipoPtNo* ptLista){
	TipoPtNo *PtAux; //ponteiro auxiliar para percorrer a lista
	while (ptLista != NULL){
		PtAux = ptLista;
		ptLista = ptLista->prox;
		free(PtAux);
	}
	free(ptLista);
	
	return NULL;
}

// Solicita ao usuário para criar um produto:
void CriaProduto(TipoInfoNo *info){
  printf("Informe um código: ");
  scanf("%d", &info->codigo);
  
  printf("Informe um nome de produto: ");  
  scanf("%s", info->nome);
  
  printf("Informe um valor: ");  
  scanf("%f", &info->preco);
}
