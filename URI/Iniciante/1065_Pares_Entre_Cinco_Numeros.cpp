#include <iostream>

using namespace std;

int main() {
    int numero;
    int pares = 0;

    for( int i = 0; i < 5; i++) {
        cin >> numero;
        if( numero % 2 == 0)
            pares++;
    }

    cout << pares << " valores pares\n";
    return 0;
}
