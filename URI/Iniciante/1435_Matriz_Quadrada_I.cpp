#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    while( (cin >> n) && (n != 0) ) {
        for( int linha = 1; linha <= n; linha++ ) {
            for( int coluna = 1; coluna <= n; coluna++ ) {
                // Distância do topo
                int x = linha;
                // Distância da lateral esquerda
                if( coluna < x ) {
                    x = coluna;
                }
                // Distância da base
                if( (n+1)-linha < x) {
                    x = (n+1) - linha;
                }
                // Distância da lateral direita
                if( (n+1) - coluna < x ) {
                    x = (n+1) - coluna;
                }
                // Menor ditância entre as margens
                cout << setw(3);
                cout << x;
                cout << ((coluna < n) ? ' ' : '\n');
            }
        }
        cout << "\n";
    }
    return 0;
}
