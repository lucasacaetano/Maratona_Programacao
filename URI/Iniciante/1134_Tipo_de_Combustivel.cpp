#include <iostream>

using namespace std;

int main() {
    int preferenciaCliente;
    int total[] = {0, 0, 0};

    cin >> preferenciaCliente;
    while( preferenciaCliente != 4){
        if( preferenciaCliente > 0 && (preferenciaCliente < 4) ){
            total[preferenciaCliente-1]++;
        }
        cin >> preferenciaCliente;
    }

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << total[0] << "\n";;
    cout << "Gasolina: " << total[1] << "\n";
    cout << "Diesel: " << total[2] << "\n";
    return 0;
}
