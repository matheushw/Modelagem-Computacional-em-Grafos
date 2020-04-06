/*
*   Modelagem Computacional em Grafos
*   Aluno: Matheus Barcellos de Castro Cunha
*   NUSP: 11208238
*/

#include <stdio.h>
#include <stdlib.h>
#include "Estrutura.h"

Grafo* inicializar (int x, int y) { //Inicializando a matriz de adjacência.
    Grafo* a = (Grafo*) malloc(sizeof(Grafo));
    a->lin = x;
    a->col = y;

    for (int i=0; i < a->lin; i++){
        for (int j=0; j < a->col; j++){
            a->mat[i][j] = 0;
        }
    }

    return a;
}

void ligar_vertices(Grafo* a, int u, int v){ //Ligar dois vértices.
    a->mat[u][v] = 1; //Criando uma aresta que vai do vértice "u" até o "v".
    a->mat[v][u] = 1; //Reciprocidade.
}

void desligar_vertices(Grafo* a, int u, int v){ //Retirar ligação entre dois vértices.
    a->mat[u][v] = 0; //Excluindo a aresta que vai do vértice "u" até o "v".
    a->mat[v][u] = 0; //Reciprocidade.
}

void print_grafo(Grafo* a) { //Imprimir a matriz de adjacência.
    for (int i=0;i<a->lin;i++){
        for (int j=0;j<a->col;j++){
            printf("%d ", a->mat[i][j]); //Imprimindo a matriz de adjacência.
        }
        printf("\n"); //Imprimindo quebra de linha no final de cada linha da matriz.
    }
}
