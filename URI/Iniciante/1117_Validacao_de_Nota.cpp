#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double soma = 0, nota;
    int notasLidas = 0;

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

    return 0;
}
