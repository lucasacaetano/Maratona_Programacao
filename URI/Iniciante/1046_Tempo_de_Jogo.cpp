#include <iostream>

using namespace std;

int main(){
    int inicio, fim;

    cin >> inicio >> fim;
    if( fim <= inicio )
        fim += 24;

    cout << "O JOGO DUROU " << fim - inicio << " HORA(S)\n";

    return 0;
}
