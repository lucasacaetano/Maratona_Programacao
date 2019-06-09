#include <iostream>
#include <list>

using namespace std;

/**
 * Classe para representar o grafo (utiliza lista de adjacencias)
 */
 class Grafo {
     private:
         int numeroVertices;
         list<int> *listaAdj; // Ponteiro para uma lista de adjacencias
         bool possuiCicloUtil(int vertice, bool visitados[], bool *pilhaRecorrencia);
     public:
        Grafo(int nVertices); // Construtor
        void adicionaAdjacencia(int origem, int destino);
        bool possuiCiclo();
 };

 /**
  * Grafo()
  * Construtor para atribuir o número de vértices e criar a lista de adjacencia com o tamanho correto
  * @param int nVertices número de vértices no grafo
  */
 Grafo::Grafo(int nVertices) {
    this->numeroVertices = nVertices;
    listaAdj = new list<int>[nVertices];
 }

 /**
  * adiconaAdjacencia()
  * Armazena a existencia do caminho do vértice origem para o vértice destino
  * @param int origem vértice de origem
  * @param int destino vértice de destino
  */
 void Grafo::adicionaAdjacencia(int origem, int destino) {
    listaAdj[origem].push_back(destino);
 }

 bool Grafo::possuiCicloUtil(int vertice, bool visitados[], bool *pilhaRecorrencia) {
    if( visitados[vertice] == false ) {
        //Marca o vértice como visitado e adiciona na pilha de recorrência
        visitados[vertice] = true;
        pilhaRecorrencia[vertice] = true;

        // Realiza a busca em profundidade utilizando recorrencia para os vértices adjacentes
        list<int>::iterator i;
        for( i = listaAdj[vertice].begin(); i != listaAdj[vertice].end(); i++ ) {
            // Nó já visitado e algum outro vértice aponta para ele
            if( !visitados[*i] && possuiCicloUtil(*i, visitados, pilhaRecorrencia) ) {
                return true;
            // Já está na pilha de recorrencia... nó apontando para ele próprio
            } else if( pilhaRecorrencia[*i]) {
                return true;
            }
        }
    }
    pilhaRecorrencia[vertice] = false; // Retira o vértice da pilha de recorrencia
    return false;
 }

 /**
  * possuiCiclo()
  * função pública da classe que verifica se existe algum ciclo em todas as possíveis
  *     árvores do grafo
  * @return bool true caso exista ciclo e false caso contrário
  */
 bool Grafo::possuiCiclo() {
     // Marca todos os vértices como não visitados e não pertencentes à pilha de recorrência
     bool *visitados = new bool[numeroVertices];
     bool *pilhaRecorrencia = new bool[numeroVertices];
     for( int i = 0; i < numeroVertices; i++ ) {
        visitados[i] = false;
        pilhaRecorrencia[i] = false;
     }

     // Chama a função recursiva auxiliar para detectar ciclos nas diferentes árvores DFS
     for( int vertice = 0; vertice < numeroVertices; vertice++ ) {
        if( possuiCicloUtil(vertice, visitados, pilhaRecorrencia) )
            return true;
     }

     return false;
 }

 int main() {
    int t;
    cin >> t;
    while( t-- ) {
        int documentos, dependencias, origem, destino;
        cin >> documentos >> dependencias;
        Grafo grafo( documentos );
        for( int i = 0; i < dependencias; i++ ) {
            // Armazena as dependências como um grafo, para chegar ao segundo documento
            //     é necessário passar pelo primeiro
            cin >> destino >> origem;
            grafo.adicionaAdjacencia( origem-1, destino-1 );
        }
        cout << ( grafo.possuiCiclo() ? "SIM\n" : "NAO\n" );

    }
    return 0;
 }
