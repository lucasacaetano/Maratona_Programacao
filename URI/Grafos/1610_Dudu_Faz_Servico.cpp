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
  * Construtor para atribuir o n�mero de v�rtices e criar a lista de adjacencia com o tamanho correto
  * @param int nVertices n�mero de v�rtices no grafo
  */
 Grafo::Grafo(int nVertices) {
    this->numeroVertices = nVertices;
    listaAdj = new list<int>[nVertices];
 }

 /**
  * adiconaAdjacencia()
  * Armazena a existencia do caminho do v�rtice origem para o v�rtice destino
  * @param int origem v�rtice de origem
  * @param int destino v�rtice de destino
  */
 void Grafo::adicionaAdjacencia(int origem, int destino) {
    listaAdj[origem].push_back(destino);
 }

 bool Grafo::possuiCicloUtil(int vertice, bool visitados[], bool *pilhaRecorrencia) {
    if( visitados[vertice] == false ) {
        //Marca o v�rtice como visitado e adiciona na pilha de recorr�ncia
        visitados[vertice] = true;
        pilhaRecorrencia[vertice] = true;

        // Realiza a busca em profundidade utilizando recorrencia para os v�rtices adjacentes
        list<int>::iterator i;
        for( i = listaAdj[vertice].begin(); i != listaAdj[vertice].end(); i++ ) {
            // N� j� visitado e algum outro v�rtice aponta para ele
            if( !visitados[*i] && possuiCicloUtil(*i, visitados, pilhaRecorrencia) ) {
                return true;
            // J� est� na pilha de recorrencia... n� apontando para ele pr�prio
            } else if( pilhaRecorrencia[*i]) {
                return true;
            }
        }
    }
    pilhaRecorrencia[vertice] = false; // Retira o v�rtice da pilha de recorrencia
    return false;
 }

 /**
  * possuiCiclo()
  * fun��o p�blica da classe que verifica se existe algum ciclo em todas as poss�veis
  *     �rvores do grafo
  * @return bool true caso exista ciclo e false caso contr�rio
  */
 bool Grafo::possuiCiclo() {
     // Marca todos os v�rtices como n�o visitados e n�o pertencentes � pilha de recorr�ncia
     bool *visitados = new bool[numeroVertices];
     bool *pilhaRecorrencia = new bool[numeroVertices];
     for( int i = 0; i < numeroVertices; i++ ) {
        visitados[i] = false;
        pilhaRecorrencia[i] = false;
     }

     // Chama a fun��o recursiva auxiliar para detectar ciclos nas diferentes �rvores DFS
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
            // Armazena as depend�ncias como um grafo, para chegar ao segundo documento
            //     � necess�rio passar pelo primeiro
            cin >> destino >> origem;
            grafo.adicionaAdjacencia( origem-1, destino-1 );
        }
        cout << ( grafo.possuiCiclo() ? "SIM\n" : "NAO\n" );

    }
    return 0;
 }
