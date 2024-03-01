// @AkrilaMayNotBeAvailable - @Github
// This was made as an Assignment in Data Structures course at UFRGS
#include "fila.h"

// Visitados = Colors
void FirstColorAvailable(int graph[SIZE][SIZE], int colors[SIZE], int vertex){
  int color = 1; // Cor inicial
  
  for(int i = 0; i < SIZE; i++){
    if(graph[vertex][i] == 1 && colors[i] == color){
      // Se o vertice vizinho tem a mesma cor, incrementa a cor
      color++;
      i = 0; // Procura do começo
    }
  }

  // O vertice recebe a cor final
  colors[vertex] = color;
}


// Função para realizar DFS em um Grafo
void DepthFirstSearch(int adj_matrix[SIZE][SIZE], int start_vertex, int num_vertices, int visited[]){
	// Mark the current vertex as visited
	FirstColorAvailable(adj_matrix, visited, start_vertex);
	//visited[start_vertex] = 1;
	printf("%d ", start_vertex+1);
	
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
    printf("%d ", vertice+1);
    
    for(int i = 0; i < num_vertices; i++){
      if(adj_matrix[vertice][i] == 1 && visited[i] == 0){
        fila = insere(fila, i);
        //visited[i] = 1;
        FirstColorAvailable(adj_matrix, visited, i);
      }
    }
  }
}

int main(){
	int visitVector[SIZE] = { 0 };
	
	for(int i = 0; i < 6; i++){
	  visitVector[i] = 0;
	}
	int adjacencyMatrix[SIZE][SIZE] = {
		{ 0, 1, 0, 0, 0, 1 }, // 1
		{ 1, 0, 1, 1, 0, 0 }, // 2
		{ 0, 1, 0, 1, 1, 0 }, // 3
		{ 0, 1, 1, 0, 1, 1 }, // 4
		{ 0, 0, 1, 1, 0, 1 }, // 5
		{ 1, 0, 0, 1, 1, 0 }  // 6
	};
	
	// Partindo do quatro:
	printf("Verti: ");
	DepthFirstSearch(adjacencyMatrix, 3, SIZE, visitVector);
	printf("\n");
	printf("Cores: ");
	for(int i = 0; i < SIZE; i++){
	  printf("%d ", visitVector[i]);
	}
  memset(visitVector, 0, SIZE * sizeof(int));
  printf("\n");
  
  //=======================================================
  // Partindo do quatro:
  printf("Verti: ");
  BreadthFirstSearch(adjacencyMatrix, 3, SIZE, visitVector);
  printf("\n");
  printf("Cores: ");
	for(int i = 0; i < SIZE; i++){
	  printf("%d ", visitVector[i]);
	}
	printf("\n");
  //memset(visitVector, 0, SIZE * sizeof(int));
  //printf("\n");

	return 0;
}
