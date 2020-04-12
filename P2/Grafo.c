/*
*   Modelagem Computacional em Grafos
*   Aluno: Matheus Barcellos de Castro Cunha
*   NUSP: 11208238
*/

#include <stdio.h>
#include <stdlib.h>
#include "Estrutura.h"

int main () {

    int n,m; //Criando inteiros para armazenar os valores de "n" e "m" propostos pelo problema.

    scanf("%d %d", &n,&m); //Lendo os inteiros "n" e "m".

    Grafo* grafo = inicializar(n); //Inicializando o grafo.

    int u,v; //Criando inteiros para armazenar os vértices a serem ligados.

    for (int i=0;i<m;i++){
        scanf("%d %d", &u,&v); //Lendo os vértices "u" e "v".
        ligar_vertices(grafo, u ,v); //Ligando vertices "u" e "v".
    }

    int q; //Criando um inteiro para armazenar a quantidade de operações a serem executadas.
    scanf("%d", &q); //Lendo "q".

    for (int i=0;i<q;i++){ //Executando q operações.

        int qi; //Criando um inteiro para indicar qual é a operação.
        scanf("%d", &qi); //Lendo "qi".

        if (qi == 1){
            scanf("%d %d", &u,&v); //Lendo os vértices "u" e "v" a serem ligados.
            ligar_vertices(grafo, u ,v); //Ligando vértices "u" e "v".
        } else if (qi == 2) {
            scanf("%d %d", &u,&v); //Lendo os vértices "u" e "v" a serem desconectados.
            desligar_vertices(grafo, u, v); //Retirar ligação entre dois vértices.
        } else if (qi == 3) {
            print_grafo(grafo); //Imprimir a matriz de adjacência.
            printf("\n"); //Imprimindo quebra de linha adicional.
        }
    }
    
    limpar_memoria(grafo); //Limpando memória.

    return 0; //Sucesso :)
}
