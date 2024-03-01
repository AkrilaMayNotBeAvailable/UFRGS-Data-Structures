#include "graph.h"
/* Code developed for Data Structures course at Federal University of Rio Grande do Sul.
	-- Implementation of Breadth-First Search and Depth-First Search for N sized graphs.

	Github: AkrilaMayNotBeAvailable
*/

int main(){
	// Vetor auxiliar para caminhamento
	int visitVector[SIZE] = { 0 };	
	// Matriz de adjacência teste
	int adjacencyMatrix[SIZE][SIZE] = {
		{ 0, 0, 0, 1, 0, 0, 0, 0 }, // 0
		{ 0, 0, 0, 0, 0, 1, 1, 0 }, // 1
		{ 0, 0, 0, 0, 1, 0, 0, 0 }, // 2
		{ 0, 1, 0, 0, 0, 0, 0, 1 }, // 3
		{ 0, 0, 1, 0, 0, 0, 0, 1 }, // 4
		{ 0, 0, 0, 1, 0, 0, 0, 1 }, // 5
		{ 0, 0, 1, 0, 1, 0, 0, 0 }, // 6
		{ 0, 0, 0, 0, 0, 1, 0, 0 }  // 7
	};
	
	// Loop:
	/*
		Caminha por todos os vértices de um grafo informando o BFS e DFS respectivamente de cada
		vértice presente.
	*/
	printf("============================\n");
	for(int i = 0; i < SIZE; i++){
		printf("BFS (%d): ", i);
		BreadthFirstSearch(adjacencyMatrix, i, SIZE, visitVector); // BFS Algorithm
		memset(visitVector, 0, SIZE * sizeof(int)); // Limpa o vetor de visitados para próxima iteração
		printf("\n");
		
		printf("DFS (%d): ", i);
		DepthFirstSearch(adjacencyMatrix, i, SIZE, visitVector); // DFS Algorithm
		memset(visitVector, 0, SIZE * sizeof(int)); // Limpa o vetor de visitados para próxima iteração
		printf("\n");
		printf("============================\n");
	}

	return 0;
}
