#include <iostream>
#include <iomanip>
#define MATRIX_SIZE 12

using namespace std;

int main() {
    char operacao;
    float matriz[MATRIX_SIZE][MATRIX_SIZE];

    cin >> operacao;
    for( int i = 0; i < MATRIX_SIZE; i++ ) {
        for( int j = 0; j < MATRIX_SIZE; j++) {
            cin >> matriz[i][j];
        }
    }

    float soma = 0;
    int total = 0;
    for( int i = MATRIX_SIZE-1; i >= 0; i-- ){
        for( int j = 0; j < MATRIX_SIZE - (i+1); j++ ) {
            soma += matriz[i][j];
            total++;
        }
    }
    cout << fixed << setprecision(1);
    if( operacao == 'S')
        cout << soma;
    else
        cout << (soma/total);

    cout << "\n";

    return 0;
}
