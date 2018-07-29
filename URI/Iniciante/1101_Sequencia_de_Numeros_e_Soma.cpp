#include <iostream>

using namespace std;

int main() {
    int x,y,soma;

    cin >> x >> y;
    while ( x > 0 && y > 0){
        soma = 0;
        for( int i = min(x,y); i <= max(x,y); i++) {
            cout << i << " ";
            soma += i;
        }
        cout << "Sum=" << soma << "\n";

        cin >> x >> y;
    }
    return 0;
}
