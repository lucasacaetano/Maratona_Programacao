#include <iostream>

using namespace std;

int main() {
    int x, z;

    cin >> x >> z;
    while( z <= x) {
        cin >> z;
    }

    int contagem = 1,soma = x;
    for( int i = x; soma <= z; i++ ) {
        contagem++;
        soma += i;
    }
    cout << contagem << "\n";
    return 0;
}
