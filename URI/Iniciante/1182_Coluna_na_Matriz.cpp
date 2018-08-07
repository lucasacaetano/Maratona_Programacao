#include <iostream>
#include <iomanip>
#define MATRIZ_SIZE 12

using namespace std;

int main() {
    float matriz[MATRIZ_SIZE][MATRIZ_SIZE];

    int coluna;
    cin >> coluna;

    char operacao;
    cin >> operacao;

    for(int i = 0; i < MATRIZ_SIZE; i++ ) {
        for( int j = 0; j < MATRIZ_SIZE; j++ ) {
            cin >> matriz[i][j];
        }
    }

    float soma = 0;
    for( int i = 0; i < MATRIZ_SIZE; i++ )
        soma += matriz[i][coluna];

    cout << fixed << setprecision(1);
    if( operacao == 'S' )
        cout << soma << "\n";
    else
        cout << soma/12 << "\n";

    return 0;
}

