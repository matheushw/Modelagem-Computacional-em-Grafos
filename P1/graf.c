/*
*   Modelagem Computacional em Grafos
*   Aluno: Matheus Barcellos de Castro Cunha
*   NUSP: 11208238
*/

#include <stdio.h>

int main () {

    int n,m; //Criando inteiros para armazenar os valores de "n" e "m" propostos pelo problema.

    scanf("%d %d", &n,&m); //Lendo os inteiros "n" e "m".

    int mat[n][n]; //Criando a matriz de adjacência.

    for (int i=0;i<n;i++){  
        for (int j=0;j<n;j++){
            mat[i][j] = 0; //Inicializando a matriz de adjacência com todos os valores zerados.
        }
    }

    int u,v; //Criando inteiros para armazenar os vértices a serem ligados.

    for (int i=0;i<m;i++){
        scanf("%d %d", &u,&v); //Lendo os vértices "u" e "v".
        mat[u][v] = 1; //Criando uma aresta que vai do vértice "u" até o "v".
        mat[v][u] = 1; //Reciprocidade.
    }

    int q; //Criando um inteiro para armazenar a quantidade de operações a serem executadas.
    scanf("%d", &q); //Lendo "q".

    for (int i=0;i<q;i++){ //Executando q operações.

        int qi; //Criando um inteiro para indicar qual é a operação.
        scanf("%d", &qi); //Lendo "qi".

        if (qi == 1){
            scanf("%d %d", &u,&v); //Lendo os vértices "u" e "v" a serem ligados.
            mat[u][v] = 1; //Criando uma aresta que vai do vértice "u" até o "v".
            mat[v][u] = 1; //Reciprocidade.

        } else if (qi == 2) {
            scanf("%d %d", &u,&v); //Lendo os vértices "u" e "v" a serem desconectados.
            mat[u][v] = 0; //Excluindo a aresta que vai do vértice "u" até o "v".
            mat[v][u] = 0; //Reciprocidade.
        } else if (qi == 3) {
            for (int j=0;j<n;j++){
                for (int z=0;z<n;z++){
                    printf("%d ", mat[j][z]); //Imprimindo a matriz de adjacência.
                }
                printf("\n"); //Imprimindo quebra de linha no final de cada linha da matriz.
            }
            printf("\n"); //Imprimindo quebra de linha adicional.
        }
    }

    return 0; //Sucesso :)
}