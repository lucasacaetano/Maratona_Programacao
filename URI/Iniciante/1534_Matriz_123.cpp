#include <iostream>

using namespace std;

int main() {
    int n;
    while( cin >> n ) {
        for( int linha = 1; linha <= n; linha++ ) {
            for( int coluna = 1; coluna <= n; coluna++ ) {
                int x = 3;
                // Diagonal principal
                if( linha == coluna ) {
                        x = 1;
                }
                // Diagonal secundária
                if( (linha + coluna) == (n+1) ) {
                    x = 2;
                }

                cout << x;
            }
            cout << "\n";
        }
    }
    return 0;
}
