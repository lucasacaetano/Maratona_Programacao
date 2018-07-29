#include <iostream>

using namespace std;

int main() {
    int n1,n2,x,y;

    cin >> n1 >> n2;

    x = min(n1,n2);
    y = max(n1,n2);

    // Pega o primeiro impar entre eles
    if( x%2 == 0 )
        x += 1;
    else
        x += 2;

    int soma = 0;
    while( x < y) {
        soma += x;
        x += 2;
    }

    cout << soma << "\n";
    return 0;
}
