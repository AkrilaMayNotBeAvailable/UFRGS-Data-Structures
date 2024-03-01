#include "graph.h"
/* Code developed for Data Structures course at Federal University of Rio Grande do Sul.
	-- Implementation of Breadth-First Search and Depth-First Search for N sized graphs.

	Github: AkrilaMayNotBeAvailable
*/

// Função para realizar DFS em um Grafo
void DepthFirstSearch(int adj_matrix[SIZE][SIZE], int start_vertex, int num_vertices, int visited[]){
	// Mark the current vertex as visited
	visited[start_vertex] = 1;
	printf("%d ", start_vertex );
	
	// Recursively visit all unvisited neighbors of the current vertex
	for(int i = 0; i < num_vertices; i++){
		if(adj_matrix[start_vertex][i] == 1 && visited[i] == 0){
			DepthFirstSearch(adj_matrix, i, num_vertices, visited);
		}
	}
}

// Função para realizar BFS em um Grafo
void BreadthFirstSearch(int adj_matrix[SIZE][SIZE], int start_vertex, int num_vertices, int visited[]){
  TipoFila *fila = cria_fila();
  
  visited[start_vertex] = 1;
  fila = insere(fila, start_vertex);
  
  while(!vazia(fila)){
    int vertice = removeFila(&fila);
    printf("%d ", vertice);
    
    for(int i = 0; i < num_vertices; i++){
      if(adj_matrix[vertice][i] == 1 && visited[i] == 0){
        fila = insere(fila, i);
        visited[i] = 1;
      }
    }
  }
}
