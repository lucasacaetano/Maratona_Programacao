#include <iostream>

using namespace std;

int main() {
    int x,y, soma = 0;
    cin >> x >> y;

    for(int i = min(x,y); i <= max(x,y); i++) {
        if( i % 13 != 0 ) soma += i;
    }
    cout << soma << "\n";
    return 0;
}
