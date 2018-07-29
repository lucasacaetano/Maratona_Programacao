#include <iostream>

typedef struct no {
    int valor;
    struct no *proximo;
} No;

typedef struct {
    No *topo;
} Pilha;

void pilhaInit(Pilha *pilha);
int pilhaIsEmpty(Pilha *pilha);
void pilhaPush(Pilha *pilha, int n);
int pilhaTop(Pilha *pilha );
int pilhaPop(Pilha *pilha );

using namespace std;

int main(){
    Pilha estacao, entrada;
    int tamanho,i;

    cin >> tamanho;
    while( tamanho != 0 ){
        // Leitura da sequência
        int aux;
        cin >> aux;
        while( aux != 0){
            i = 1;
            int sequencia[tamanho];
            sequencia[0] = aux;
            while (i < tamanho){
                cin >> aux;
                sequencia[i] = aux;
                i++;
            }

            // Inicialização
            pilhaInit( &estacao );
            pilhaInit( &entrada );
            for( int i = tamanho; i > 0; i--){
                pilhaPush( &entrada, i);
            }

            int possivel = 1;
            i = 0;
            while( possivel && i < tamanho ){
                if( !pilhaIsEmpty(&estacao) && sequencia[i] == pilhaTop(&estacao) ) {
                    pilhaPop(&estacao);
                    i++;
                } else { // passa um vagão da entrada para a estação
                    if(!pilhaIsEmpty(&entrada)) {
                        pilhaPush( &estacao, pilhaPop(&entrada) );
                    } else {
                        possivel = 0;
                    }
                }
            }

            if(possivel) cout << "Yes\n";
            else cout << "No\n";


            cin >> aux;
        }
        cout << "\n";

        cin >> tamanho;
    }
    return 0;
}


void pilhaInit(Pilha *pilha)
{
    pilha->topo = nullptr;
}

int pilhaIsEmpty(Pilha *pilha)
{
    return pilha->topo == nullptr;
}

void pilhaPush(Pilha *pilha, int n)
{
    /*ALOCA MEMoRIA PARA O NOVO No*/
    No *novo = new No;

    novo->valor = n;
    novo->proximo = pilha->topo;

    pilha->topo = novo;
}
int pilhaTop(Pilha *pilha )
{
    return pilha->topo->valor;
}

int pilhaPop(Pilha *pilha)
{
    No *aux;
    aux = pilha->topo;
    /*APONTA TOPO PARA O PENuLTIMO ELEMENTO*/
    pilha->topo = pilha->topo->proximo;
    /*ARMAZENA VALOR DO TOPO*/
    int valor = aux->valor;
    delete(aux); //LIBERA MEM�RIA
    return valor;
}
