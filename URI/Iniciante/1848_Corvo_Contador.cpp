#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int lidos = 0;
    unsigned long total = 0;
    string linha;
    bitset<3> numero;
    while (lidos < 3){
        getline( cin, linha);
        if( linha.compare("caw caw") == 0 ) {
            lidos ++;
            numero.reset();
            cout << total << "\n";
            total = 0;
        } else {
            for( int i = 0; i < 3; i++ ) {
                bool value = ( (linha[i] == '-') ? false: true );
                numero.set(2-i, value);
            }
            total += numero.to_ulong();
        }
    }
    return 0;
}

