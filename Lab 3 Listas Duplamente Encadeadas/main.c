// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "list.h"

// Função Principal ()
int main(){
  int op;
  int codigo;
	TipoPtNo *listaEncadeada = Inicializa();
	TipoPtNo *removido = Inicializa();
	TipoInfoNo produto = { 0 };
	
	do{
	  ImprimeMenu();
	  
	  scanf("%d", &op);
	  switch(op){
	  	case 0:
	  		break;
	    case 1:
	      Imprime(listaEncadeada);
	      break;
	    case 2:
	    	ImprimeInvertida(listaEncadeada);
	    	break;
	    case 3:
	      CriaProduto(&produto);
	      InsereProduto(&listaEncadeada, produto);
	      break;
	    case 4:
	    	printf("Informe o codigo para remover:\n");
	    	scanf("%d", &codigo);
	    	removido = Remover(&listaEncadeada, codigo);
	    	if(removido){
	    		printf("Elemento removido: Codigo: %d, Nome: %s, Valor: %f\n", removido->info.codigo, removido->info.nome, removido->info.preco);
	    		free(removido);
	    	} else {
	    		printf("Elemento nao encontrado...\n");
	    	}
	    	break;
	    case 5:
	    	listaEncadeada = Destroi(listaEncadeada);
	    	printf("A lista foi destruida.\n");
	    	break;
	    default:
	    	printf("Opcao Invalida!");
	    	break;
	      
	  }
  }while(op != 0);
	
	return 0;
}
