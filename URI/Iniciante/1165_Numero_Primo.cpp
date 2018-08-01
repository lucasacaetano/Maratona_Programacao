#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while( n-- ) {
        int numero, divisores = 1;
        cin >> numero;
        for( int i = 2; i < numero && divisores == 1; i++ ) {
            if( numero % i == 0 ) divisores++;
        }
        if( divisores == 1 ) cout << numero << " eh primo\n";
        else cout << numero << " nao eh primo\n";
    }
    return 0;
}
