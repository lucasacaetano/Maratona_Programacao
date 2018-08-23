#include <iostream>

using namespace std;

int main() {
    int n, t, menor, iMenor = 1;
    cin >> n;

    cin >> menor;
    for( int i = 1; i < n; i++ ) {
        cin >> t;
        if( t < menor ) {
            menor = t;
            iMenor = i+1;
        }
    }
    cout << iMenor << "\n";
    return 0;
}
