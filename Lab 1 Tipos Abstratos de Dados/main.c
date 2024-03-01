// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS

#include <stdio.h>
#include <stdlib.h>
#include "data.h"

// Função Principal ()
int main(){
	Data datas[QNT_DATAS] = { 0 };
	Data pascoa = { 0 };
	int dias;
	
	// Loop para preencher estruturas
	for(int i = 0; i < QNT_DATAS; i++){
		LeData(&datas[i]);
		if(ValidaData(datas[i])){
			ImprimeData(datas[i]);
		} else {
			printf("A data informada nao e valida.\n");
		}
	}
	
	// Calculo de diferença entre as datas informada
	dias = CalculaDias(datas[0], datas[1]);
	printf("Diferenca de dias entre datas: %d\n", dias);
	
	// Imprime data da pascoa
	pascoa = CalculaPascoa(2008);
	ImprimeData(pascoa);
	
	return 0;
}
