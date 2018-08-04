#include <iostream>
#include <list>

using namespace std;

/**
 * displayContentAndClean()
 * Exibe o conte�do da lista de inteiros passada por refer�ncia e o r�tulo
 *  indicando se � uma lista de pares ou impares. Os elementos s�o removidos
 *  da lista, resultando em uma lista vazia.
 * @param list<int>& refer�ncia para uma lista de inteiros
 * @param int valor inteiro, caso seja par impreme o r�tulo de par, imprime
 *  o r�tulo impar caso contr�rio
 */
void displayContentAndClean( list<int>&, int );

int main() {
    list<int> par, impar;

    int numero, max_size = 5;
    for( int n = 0; n < 15; n ++) {
        cin >> numero;
        if( numero % 2 == 0 ) {
            par.push_back(numero);
            if(  par.size() >= max_size)
                displayContentAndClean( par, 0 );
        } else {
            impar.push_back( numero );
            if( impar.size() >= max_size )
                displayContentAndClean( impar, 1 );
        }
    }

    displayContentAndClean( impar, 1 );
    displayContentAndClean( par, 0 );

    return 0;
}

void displayContentAndClean( list<int>& lista, int rotulo ) {
    int i = 0;
    while( !lista.empty() ) {
        (rotulo % 2 == 0) ? cout << "par" : cout << "impar";
        cout << "[" << i++ << "] = " << lista.front() << "\n";
        lista.pop_front();
    }
}
