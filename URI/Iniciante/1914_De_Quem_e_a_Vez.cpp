#include <iostream>

using namespace std;

int main() {
    int qt;
    cin >> qt;
    cin.ignore();
    while(qt--) {
        string jogador1, op1, jogador2, op2;
        string jogadorPar, jogadorImpar;

        getline(cin, jogador1, ' ');
        getline(cin, op1, ' ');
        getline(cin, jogador2, ' ');
        getline(cin, op2);

        if( op1.compare("PAR") == 0 ) {
            jogadorPar.assign(jogador1);
            jogadorImpar.assign(jogador2);
        } else {
            jogadorPar.assign(jogador2);
            jogadorImpar.assign(jogador1);
        }

        unsigned int val1, val2;
        cin >> val1 >> val2;
        cin.ignore();
        bool par = ( (val1 + val2) % 2 == 0 );
        cout << ( (par) ? jogadorPar : jogadorImpar ) << "\n";;
    }

    return 0;
}

