#include <iostream>

using namespace std;

int main() {
    int maior, posicao, numero;
    cin >> numero;
    maior = numero;
    posicao = 1;
    for( int i = 1; i < 100; i++ ) {
        cin >> numero;
        if( numero > maior ) {
            maior = numero;
            posicao = i + 1;
        }
    }

    cout << maior << "\n" << posicao << "\n";

    return 0;
}
