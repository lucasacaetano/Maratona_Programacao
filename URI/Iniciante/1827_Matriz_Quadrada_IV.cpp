#include <iostream>

using namespace std;

int main() {
    int n;
    while( cin >> n) {
        for( int linha = 1; linha <= n; linha++ ) {
            for( int coluna = 1; coluna <= n; coluna++ ) {
                int valor = 0;
                int centro = (n/2 + 1);
                int umTerco = (n/3);

                // Ponto central
                if( (linha == centro) && (coluna == centro ) ) {
                    valor = 4;
                // Quadrado interno de 1's
                } else if(
                    (linha > umTerco )
                    && (linha < (n+1-umTerco))
                    && (coluna > umTerco)
                    && (coluna < (n+1-umTerco))
                ) {
                    valor = 1;
                // Diagonal secundária
                } else if( (linha + coluna) == (n+1) ) {
                    valor = 3;
                // Diagonal principal
                } else if( linha == coluna ) {
                    valor = 2;
                }
                cout << valor;
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
