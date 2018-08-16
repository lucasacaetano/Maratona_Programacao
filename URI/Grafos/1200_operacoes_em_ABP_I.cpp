#include <iostream>
#include <string>

using namespace std;

struct no {
	struct no * esquerda;
	struct no * direita;
	char dado;
};

typedef struct no No;

struct arvore{
	No * raiz;
};

typedef struct arvore Arvore;

No * criaNo(char dado);
No * insereArvore( No * raiz, char dado);
void percursoEmOrdem( No * raiz, string * elementos );
void percursoPreOrdem( No * raiz, string * elementos );
void percursoPosOrdem( No * raiz, string * elementos );
No * buscaArvore( No * raiz, char dado );

int main()
{
    string line;
    Arvore arvore1;
    arvore1.raiz = nullptr;

	while (getline(std::cin, line))
	{
	    string elementos;
		if(line == "PREFIXA") {
			percursoPreOrdem( arvore1.raiz, &elementos );
			cout << elementos << "\n";
		}
		else if(line == "INFIXA"){
			percursoEmOrdem( arvore1.raiz, &elementos );
			cout << elementos << "\n";
		}
		else if(line == "POSFIXA") {
			percursoPosOrdem( arvore1.raiz, &elementos );
			cout << elementos << "\n";
		}
	    else{
	    	if(line[0] == 'I'){
	    		arvore1.raiz = insereArvore(arvore1.raiz, line[2]);
			} else {
				No *temp = buscaArvore(arvore1.raiz, line[2]);
				if( temp != nullptr) {
					cout << line[2] << " existe\n";
				} else {
					cout << line[2] << " nao existe\n";
				}
			}
		}
	}
}

No * criaNo(char dado)
{
	No * novoNo = new No;
	novoNo->dado = dado;
	novoNo->direita = nullptr;
	novoNo->esquerda = nullptr;

	return novoNo;
}

No * insereArvore( No * raiz, char dado)
{
	if ( raiz == nullptr )
		return criaNo(dado);

	if ( raiz->dado == dado )
		return raiz;

	if( dado > raiz->dado )
		raiz->direita = insereArvore( raiz->direita, dado );

	if( dado < raiz->dado )
		raiz->esquerda = insereArvore( raiz->esquerda, dado );

	return raiz;
}

void percursoEmOrdem( No * raiz, string *elementos )
{
	if( raiz == nullptr )
		return;

	percursoEmOrdem(raiz->esquerda, elementos);
	if( ! (*elementos).empty() )
        (*elementos).append(" ");
    (*elementos).append( string(1,raiz->dado) );
	// cout << raiz->dado << " ";
	percursoEmOrdem(raiz->direita, elementos);
}
void percursoPreOrdem( No * raiz, string * elementos )
{
	if( raiz == nullptr )
		return;

	// cout << raiz->dado << " ";
	if( ! (*elementos).empty() )
        (*elementos).append(" ");
    (*elementos).append( string(1,raiz->dado) );
	percursoPreOrdem(raiz->esquerda, elementos);
	percursoPreOrdem(raiz->direita, elementos);
}
void percursoPosOrdem( No * raiz, string * elementos )
{
	if( raiz == nullptr )
		return;

	percursoPosOrdem(raiz->esquerda, elementos);
	percursoPosOrdem(raiz->direita, elementos);
	// cout << raiz->dado << " ";
	if( ! (*elementos).empty() )
        (*elementos).append(" ");
    (*elementos).append( string(1,raiz->dado) );
}
No * buscaArvore( No * raiz, char dado )
{
	if( raiz == nullptr ) {
		return nullptr;
	} else if( raiz->dado == dado ) {
		return raiz;
	} else if( dado > raiz->dado ) {
		return buscaArvore( raiz->direita, dado );
	} else if( dado < raiz->dado ) {
		return buscaArvore( raiz->esquerda, dado );
	}
}





