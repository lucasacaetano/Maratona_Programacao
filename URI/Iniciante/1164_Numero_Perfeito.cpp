#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    while( n-- ) {
        cin >> x;
        int soma = 0;
        for( int i = 1; i < x && soma <= x; i++) {
            if( x % i == 0) soma += i;
        }
        if(soma == x) cout << x << " eh perfeito\n";
        else cout << x << " nao eh perfeito\n";
    }

    return 0;
}
