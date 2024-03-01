// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "Pilha.h"

int main(){
    TipoPilha *p1 = InicializaPilha();
    TipoPilha *p2 = InicializaPilha();
    TipoPilha *p3 = InicializaPilha();
    TipoPilha *p4 = InicializaPilha();

    // Pilha 1:
    p1 = PushPilha(p1, 1);
    p1 = PushPilha(p1, 2);
    p1 = PushPilha(p1, 3);
    p1 = PushPilha(p1, 4);
    // Pilha 2
    p2 = PushPilha(p2, 2);
    p2 = PushPilha(p2, 3);
    p2 = PushPilha(p2, 4);
    // Pilha 3
    p3 = PushPilha(p3, 4);
    p3 = PushPilha(p3, 3);
    p3 = PushPilha(p3, 2);
    p3 = PushPilha(p3, 1);
    // Pilha 4
    p4 = PushPilha(p4, 4);
    p4 = PushPilha(p4, 3);
    p4 = PushPilha(p4, 2);
    p4 = PushPilha(p4, 1);

    /* DEBUG
    ImprimirPilha(p1);
    ImprimirPilha(p2);
    ImprimirPilha(p3);
    ImprimirPilha(p4);

    if(ComparaPilha(p4, p3)){
        printf("Pilhas iguais. \n");
    } else {
        printf("Pilhas não são iguais. \n");
    }
    */

    if(ComparaPilha(p1, p2)){ // Não são iguais
        printf("As pilhas p1 e p2 são iguais.\n");
    } else {
        printf("As pilhas p1 e p2 NÃO são iguais.\n");
    }

    if(ComparaPilha(p3, p4)){ // Essas são iguais
        printf("As pilhas p3 e p4 são iguais.\n");
    } else {
        printf("As pilhas p2 e p4 NÃO são iguais.\n");
    }

    return 0;
}
