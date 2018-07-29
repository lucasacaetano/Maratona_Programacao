#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int qtdPositivos;
    float valor, totalPositivos;

    qtdPositivos = 0;
    totalPositivos = 0;

    for( int i = 0; i < 6; i++) {
        cin >> valor;
        if( valor > 0) {
            qtdPositivos++;
            totalPositivos += valor;
        }
    }

    cout << qtdPositivos << " valores positivos\n";
    cout << fixed << setprecision(1) << totalPositivos/qtdPositivos << "\n";
    return 0;
}
