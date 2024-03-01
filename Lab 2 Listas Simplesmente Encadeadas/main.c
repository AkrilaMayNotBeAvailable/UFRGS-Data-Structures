// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "list.h"

// Função Principal ()
int main(){
  int op;
	TipoPtNo *listaEncadeada = Inicializa();
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
	      CriaProduto(&produto);
	      listaEncadeada = InsereProduto(listaEncadeada, produto);
	      break;
	    default:
	    	printf("Opcao Invalida!");
	    	break;
	      
	  }
  }while(op != 0);
	
	return 0;
}
