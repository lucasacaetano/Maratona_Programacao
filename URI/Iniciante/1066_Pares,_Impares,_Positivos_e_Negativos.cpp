#include <iostream>

using namespace std;

int main() {
    int pares, impares, positivos, negativos, numero;
    pares = impares = positivos = negativos = 0;

    for( int i = 0; i < 5; i++) {
        cin >> numero;
        if( numero % 2 ==0 )
            pares++;
        else
            impares++;

        if( numero > 0 )
            positivos++;
        else if( numero < 0 )
            negativos++;
    }

    cout << pares << " valor(es) par(es)\n";
    cout << impares << " valor(es) impar(es)\n";
    cout << positivos << " valor(es) positivo(s)\n";
    cout << negativos << " valor(es) negativo(s)\n";

    return 0;
}
