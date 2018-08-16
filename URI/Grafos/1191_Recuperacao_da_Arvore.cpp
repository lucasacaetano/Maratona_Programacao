#include <iostream>

using namespace std;

/**
 * @var int prefixoIndex
 * Variável global para carregar o index dentro das chamadas recursivas
 */
int prefixoIndex;

struct no{
    char letra;
    struct no* esquerdo;
    struct no* direito;
};

struct no* novoNo(char dado) {
    no* novo = new no;
    novo->letra = dado;
    novo->esquerdo = novo->direito = nullptr;

    return novo;
};

int busca(string infixo, int inStart, int inEnd, char dado) {
    for( int i = 0; i < infixo.length(); i++ ) {
        if( infixo[i] == dado )
            return i;
    }
}

struct no* constroiArvore(string infixo, string prefixo, int inStart, int inEnd) {
    if( inStart > inEnd )
        return nullptr;

    struct no* raiz = novoNo( prefixo[prefixoIndex++] );

    if( inStart == inEnd )
        return raiz;

    int infixoIndex = busca( infixo, inStart, inEnd, raiz->letra );
    raiz->esquerdo = constroiArvore( infixo, prefixo, inStart, infixoIndex-1);
    raiz->direito = constroiArvore( infixo, prefixo, infixoIndex+1, inEnd);

    return raiz;
};

void posfixo( no* raiz ) {
    if( raiz == nullptr )
        return;

    posfixo( raiz->esquerdo );
    posfixo( raiz->direito );
    cout << raiz->letra;
}

void destroi( no* raiz ) {
    if( raiz == nullptr )
        return;

    destroi( raiz->esquerdo );
    destroi( raiz->direito );
    delete(raiz);
}

int main() {
    string prefixo, infixo;

    while( cin >> prefixo ){
        cin >> infixo;
        prefixoIndex = 0;
        struct no* arvore1 = constroiArvore(infixo, prefixo, 0, prefixo.length() -1);
        posfixo( arvore1 );
        cout << "\n";
        destroi( arvore1 );
    }


    return 0;
}
