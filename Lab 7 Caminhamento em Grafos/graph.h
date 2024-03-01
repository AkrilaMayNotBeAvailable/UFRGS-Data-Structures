#include "fila.h"
/* Code developed for Data Structures course at Federal University of Rio Grande do Sul.
	-- Implementation of Breadth-First Search and Depth-First Search for N sized graphs.

	Github: AkrilaMayNotBeAvailable
*/


#define SIZE 8 // Define o tamanho máximo do grafo -- Utilizado em main.c

// Função para realizar DFS em um Grafo
void DepthFirstSearch(int adj_matrix[SIZE][SIZE], int start_vertex, int num_vertices, int visited[]);

// Função para realizar BFS em um Grafo
void BreadthFirstSearch(int adj_matrix[SIZE][SIZE], int start_vertex, int num_vertices, int visited[]);
