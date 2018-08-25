#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int ladoA, ladoB, porcentagem;
    do {
        cin >> ladoA ;
        if( ladoA == 0 )
            break;
        cin >> ladoB >> porcentagem;

        // Metragem do terreno pelas medidas
        int metragem = ladoA * ladoB;
        // Metragem do terreno levando em conta a porcentagem construida
        metragem = (metragem * 100)/porcentagem;

        // Como a construção precisa ser quadrada tira a raiz
        cout << floor( pow(metragem, 0.5) ) << "\n";
    }while(ladoA != 0);
    return 0;
}
