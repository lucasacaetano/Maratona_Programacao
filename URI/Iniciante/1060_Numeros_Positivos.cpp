#include <iostream>

using namespace std;

int main() {
    int quantidade = 0;
    float valor;

    for( int i = 0; i < 6; i++) {
        cin >> valor;
        if(valor > 0)
            quantidade++;
    }

    cout << quantidade << " valores positivos\n";

    return 0;
}
