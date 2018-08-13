#include <iostream>

using namespace std;

int main() {
    int l, velocidade;
    while( cin >> l ) {
        int velocidadeMaxima = 0;
        for( int i = 0; i < l; i++ ) {
            cin >> velocidade;
            if( velocidade > velocidadeMaxima )
                velocidadeMaxima = velocidade;
        }

        if( velocidadeMaxima < 10) {
            cout << 1 << "\n";
        } else if( velocidadeMaxima < 20) {
            cout << 2 << "\n";
        } else {
            cout << 3 << "\n";
        }
    }
    return 0;
}
