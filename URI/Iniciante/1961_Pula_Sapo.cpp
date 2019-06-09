#include <iostream>
#include <cmath>

using namespace std;

int main(){
    bool ganhou = true;
    int pulo, qtdCanos, canoAtual, canoProximo;
    cin >> pulo >> qtdCanos;
    cin >> canoAtual;
    for( int i = 1; i < qtdCanos; i++ ) {
        cin >> canoProximo;
        if( abs(canoAtual - canoProximo) > pulo )
            ganhou = false;

        canoAtual = canoProximo;
    }
    cout << (ganhou ? "YOU WIN":"GAME OVER") << "\n";;
    return 0;
}
