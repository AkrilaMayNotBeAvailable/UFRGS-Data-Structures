// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include <stdio.h>
#include <stdlib.h>

typedef struct TPtPilha TipoPilha;
typedef int TipoInfo;

TipoPilha* InicializaPilha (void);
int PilhaVazia (TipoPilha *Topo);
void ImprimirPilha (TipoPilha *Topo);
TipoPilha* PushPilha (TipoPilha *Topo, TipoInfo Dado);
int PopPilha (TipoPilha **Topo, TipoInfo *Dado);
TipoInfo ConsultaPilha (TipoPilha *Topo);
TipoPilha* DestroiPilha (TipoPilha *Topo);
int ComparaPilha(TipoPilha *p1, TipoPilha *p2);

