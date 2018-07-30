#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while( n-- ) {
        int x,y;
        cin >> x >> y;
        if( x % 2 == 0 ) x++;
        int soma = 0;
        while( y-- ) {
            soma += x;
            x += 2;
        }
        cout << soma << "\n";
    }
    return 0;
}
