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
#define STRING_SIZE 32

//==========================================
// Declaração de estruturas e enums:
//==========================================
// Tipo Abstrato de Dados:
typedef struct{
  int codigo;
  char nome[STRING_SIZE];
  float preco;
} TipoInfoNo;

struct s_PtNo{
  TipoInfoNo info;
  struct s_PtNo * prox;
};

typedef struct s_PtNo TipoPtNo;

//==========================================
// Funções utilizadas no programa:
//==========================================
// Cria uma lista null
TipoPtNo* Inicializa(void);

// Imprime um menu
void ImprimeMenu();

// Imprime uma lista
void Imprime(TipoPtNo* ptLista);

// Cria um produto
void CriaProduto(TipoInfoNo *info);

// Insere um produto na lista
TipoPtNo* InsereProduto(TipoPtNo* ptLista, TipoInfoNo produto);

