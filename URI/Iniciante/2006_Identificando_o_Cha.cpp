#include <iostream>

using namespace std;

int main() {
    int t, contador = 0, resposta;
    cin >> t;
    for( int i = 1; i <= 5; i++){
        cin >> resposta;
        if( resposta == t ) contador++;
    }
    cout << contador << "\n";
    return 0;
}
