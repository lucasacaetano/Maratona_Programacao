#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    while ( x != 0 ) {
            int soma = 0;
        for( int j = 0, i = (x%2==0) ? x : x+1;  j < 5; j++, i+=2 ) {
            soma += i;
        }
        cout << soma << "\n";
        cin >> x;
    }
    return 0;
}
