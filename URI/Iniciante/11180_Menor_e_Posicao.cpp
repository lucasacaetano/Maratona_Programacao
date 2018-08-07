#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];
    for( int i = 0; i < n; i++)
        cin >> x[i];

    int posicao = 0;
    for( int i = 1; i < n; i++ ) {
        if( x[i] < x[posicao] ) {
            posicao = i;
        }
    }

    cout << "Menor valor: " << x[posicao] << "\n";
    cout << "Posicao: " << posicao << "\n";

    return 0;
}
