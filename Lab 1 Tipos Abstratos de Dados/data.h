// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS

#define QNT_DATAS 2
#define ANO 365
#define MES 30

//==========================================
// Declaração de estruturas e enums:
//==========================================
// Tipo Abstrato de Dados: Data -> (dd,mm,aaaa)
typedef struct{
	int dia;
	int mes;
	int ano;
} Data;


//==========================================
// Funções utilizadas no programa:
//==========================================
// Lê data dados input do usuário
void LeData(Data *d);
// Verifica se a data está nos padrões básicos de data
int ValidaData(Data d);
// Imprime a data na tela
void ImprimeData(Data d);
// Calcula diferença de dias
int CalculaDias(Data primeira, Data segunda);
// Calcula a data da pascoa em determinado ano
Data CalculaPascoa(int ano);
