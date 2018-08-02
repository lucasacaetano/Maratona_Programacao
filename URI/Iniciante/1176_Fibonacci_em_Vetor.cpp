#include <iostream>

using namespace std;

int main() {
    unsigned long long int fib[61];
    int t;
    cin >> t;
    if( t > 0 ) {
        fib[0] = 0;
        fib[1] = 1;
        for( int i = 2; i <= 60; i++ )
            fib[i] = fib[ i - 1 ] + fib[ i - 2 ];
        int n;
        while(t--) {
            cin >> n;
            cout << "Fib(" << n << ") = " << fib[n] << "\n";
        }
    }

    return 0;
}
