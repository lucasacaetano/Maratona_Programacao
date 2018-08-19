#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    while( (cin >> n) && (n != 0) ) {
        // Quantidade de digitos do maior número
        int maiorValor = pow(2, (n-1) ) * pow(2, (n-1) );
        int qtdDigitos = (log10(maiorValor) + 1 );

        for( int linha = 1; linha <= n; linha++ ) {
            int inicio = pow(2, linha -1);
            for( int coluna = 1; coluna <= n; coluna++ ) {
                cout << setw(qtdDigitos) << inicio;
                inicio *= 2;
                cout << ( (coluna < n) ? ' ' : '\n' );
            }
        }
        cout << "\n";
    }
    return 0;
}
