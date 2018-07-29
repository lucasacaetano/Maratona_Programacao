#include <iostream>

using namespace std;

int main() {
    int valor, n = -1;
    cin >> valor;
    while( n <= 0 )
        cin >> n;

    int soma = 0;
    for( int i = 0; i < n; i++ ) {
        soma += valor + i;
    }

    cout << soma << "\n";
    return 0;
}
