#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    while( (cin >> n) && (n != 0) ) {
        for( int linha = 1; linha <= n; linha++ ) {
            for( int coluna = 1; coluna <= n; coluna++ ) {
                // Dist�ncia do topo
                int x = linha;
                // Dist�ncia da lateral esquerda
                if( coluna < x ) {
                    x = coluna;
                }
                // Dist�ncia da base
                if( (n+1)-linha < x) {
                    x = (n+1) - linha;
                }
                // Dist�ncia da lateral direita
                if( (n+1) - coluna < x ) {
                    x = (n+1) - coluna;
                }
                // Menor dit�ncia entre as margens
                cout << setw(3);
                cout << x;
                cout << ((coluna < n) ? ' ' : '\n');
            }
        }
        cout << "\n";
    }
    return 0;
}
