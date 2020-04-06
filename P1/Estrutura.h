/*
*   Modelagem Computacional em Grafos
*   Aluno: Matheus Barcellos de Castro Cunha
*   NUSP: 11208238
*/

#ifndef ESTRUTURA_H_
#define ESTRUTURA_H_

#define MAXN 1010

typedef struct { //TAD Grafo.
    int mat[MAXN][MAXN];
    int lin,col;
} Grafo;

Grafo* inicializar (int x, int y); //Inicializa a matriz de adjacência.
void ligar_vertices(Grafo* a, int u, int v); //Liga dois vértices.
void desligar_vertices(Grafo* a, int u, int v); //Retira ligação entre dois vértices.
void print_grafo(Grafo* a); //Imprimir a matriz de adjacência.

#endif
