#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double soma = 0, nota;
    int notasLidas = 0, repetir;

    do{
        soma = 0;
        repetir = 0;
        notasLidas = 0;
        while( notasLidas < 2 ) {
            cin >> nota;
            if( nota < 0 || nota > 10 ) {
                cout << "nota invalida\n";
            } else {
                notasLidas++;
                soma+=nota;
            }
        }
        cout << fixed << setprecision(2);
        cout << "media = " << soma/2 << "\n";
        while( repetir != 1 &&  repetir != 2) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> repetir;
        }
    }while(repetir != 2);

    return 0;
}
