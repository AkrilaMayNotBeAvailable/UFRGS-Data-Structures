// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "Pilha.h"

struct TPtPilha{
  TipoInfo dado;
  struct TPtPilha *elo;
};

TipoPilha* InicializaPilha (void){
  return NULL;
}

int PilhaVazia (TipoPilha *Topo){
  if (Topo==NULL)
    return 1;
  else
    return 0;
}

void ImprimirPilha (TipoPilha *Topo){
  TipoPilha *ptaux;

  if(Topo != NULL){
    puts("---Imprimindo pilha---");
  for(ptaux=Topo; ptaux!=NULL; ptaux=ptaux->elo)
    printf("%d\n",ptaux->dado);
    puts("-------Fim pilha------");
  }
  else
  puts("Pilha vazia");
}

TipoPilha* PushPilha(TipoPilha *Topo, TipoInfo Dado){
  TipoPilha *novo; //novo elemento
  TipoPilha *ptaux = Topo; //ponteiro auxiliar para percorrer a lista

  /*aloca um novo nodo */
  novo = (TipoPilha*) malloc(sizeof(TipoPilha));
  novo->elo = NULL;

  /*insere a informação no novo nodo*/
  novo->dado = Dado;

  /*encaeia o elemento*/
  novo->elo = Topo;
  Topo = novo;
  return Topo;
}

//retorna 1 se exclui e zero se não exclui
int PopPilha (TipoPilha **Topo, TipoInfo *Dado){
  TipoPilha* ptaux;

  if(PilhaVazia(*Topo))
    return 0;   //n�o tem nada na pilha
  else{
    *Dado = (*Topo)->dado;     // devolve o valor do topo
    ptaux = *Topo;          //guarda o endereço do topo
    *Topo = (*Topo)->elo;     //o próximo passa a ser o topo
    free(ptaux);           //libera o que estava no topo
    ptaux=NULL;
    return 1;
  }
}

TipoInfo ConsultaPilha(TipoPilha *Topo){
  if (Topo==NULL)
    return 0;
  else
    return Topo->dado;
}

TipoPilha* DestroiPilha (TipoPilha *Topo){
  TipoPilha *ptaux;

  while (Topo != NULL){
    ptaux = Topo;          //guarda o endere�o do topo
    Topo = Topo->elo;     //o pr�ximo passa a ser o topo
    free(ptaux);           //libera o que estava no topo
  }
  return NULL;
}

int ComparaPilha(TipoPilha *p1, TipoPilha *p2){
  TipoInfo dadoP1 = 0;
  TipoInfo dadoP2 = 0;

  while((!PilhaVazia(p1) || !PilhaVazia(p2))){
    // Se uma das pilhas está vazia, não precisa consultar a pilha, só informa que não são iguais.
    // Note que isso evita de o while seguir mais um loop quando uma das pilhas já é vazia. O código também
    // funciona se não tiver essa verificação, mas o último dado de uma pilha vazia pode ter o valor zero e causar
    // uma comparação inválida.
    if(PilhaVazia(p1) || PilhaVazia(p2)){
        return 0; 
    }

    dadoP1 = ConsultaPilha(p1);
    dadoP2 = ConsultaPilha(p2);
    
    if(dadoP1 == dadoP2){
      PopPilha(&p1, &dadoP1);
      PopPilha(&p2, &dadoP2); // É o mesmo dado, mas por consistência de código e já que tá declarada vai ele mesmo.
    }
    else{
      return 0;
    }
  }
  return 1;
}


