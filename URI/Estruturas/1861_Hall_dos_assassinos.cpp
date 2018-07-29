#include <iostream>


using namespace std;

struct no {
    string nome;
    int vivo;
    int kills;
    struct no * esquerda;
    struct no * direita;
};

typedef struct no No;

struct arvore{
    No * raiz;
};
typedef struct arvore Arvore;

No * criaNo(string nome);
No * insereArvore( No * raiz, string nome);
No * buscaArvore( No * raiz, string nome);
void percursoEmOrdem( No * raiz );

int main()
{
    Arvore ArvoreAssassinos;
    ArvoreAssassinos.raiz = nullptr;
    // Leitura das linhas até fim de arquivo
    string line;
    string assassino, assassinado;
    while( getline(cin, line) ) {
        // Separa assassino do assassinado
        assassino = line.substr( 0, line.find(' ') );
        assassinado = line.substr( line.find(' ') + 1 );

        // Insere ou busca posição do assassino e atualiza número de mortes
        ArvoreAssassinos.raiz = insereArvore(ArvoreAssassinos.raiz, assassino);
        No * posicaoAssassino = buscaArvore(ArvoreAssassinos.raiz, assassino);
        posicaoAssassino->kills++;

        // Insere/busca posicao do assassinado e atualiza situação
        ArvoreAssassinos.raiz = insereArvore(ArvoreAssassinos.raiz, assassinado);
        No * posicaoAssassinado = buscaArvore(ArvoreAssassinos.raiz, assassinado);
        posicaoAssassinado->vivo = 0;

    }
    // Percorre a árvore em ordem escrevendo o nome dos vivos
    cout << "HALL OF MURDERERS\n";
    if( ArvoreAssassinos.raiz != nullptr)
        percursoEmOrdem( ArvoreAssassinos.raiz );
    return 0;
}

No * criaNo(string nome)
{
    No * novoNo = new No;
    novoNo->nome = nome;
    novoNo->direita = nullptr;
    novoNo->esquerda = nullptr;
    novoNo->vivo = 1;
    novoNo->kills = 0;
}

No * insereArvore( No * raiz, string nome)
{
    if( raiz == nullptr )
        return criaNo(nome);

    if( nome.compare(raiz->nome) < 0 )
        raiz->esquerda = insereArvore(raiz->esquerda, nome);
    else if(nome.compare(raiz->nome) > 0 )
        raiz->direita = insereArvore( raiz->direita, nome);

    return raiz;
}

No * buscaArvore( No * raiz, string nome)
{
    if( raiz == nullptr )
        return raiz;

    if( nome.compare(raiz->nome) == 0 )
        return raiz;

    if( nome.compare(raiz->nome) < 0)
        return buscaArvore(raiz->esquerda, nome);
    else if( nome.compare(raiz->nome) > 0)
        return buscaArvore(raiz->direita, nome);
}

void percursoEmOrdem( No * raiz )
{
    if( raiz == nullptr)
        return;

    percursoEmOrdem(raiz->esquerda);
    if(raiz->vivo) {
        cout << raiz->nome << " " << raiz->kills << "\n";
    }
    percursoEmOrdem(raiz->direita);
}
