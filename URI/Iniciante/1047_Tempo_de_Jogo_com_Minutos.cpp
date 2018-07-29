#include <iostream>

using namespace std;

int main(){
    int hora, minuto;
    int tempoInicial, tempoFinal;
    int minutosTotais;

    cin >> hora >> minuto;
    tempoInicial = (hora * 60) + minuto;

    cin >> hora >> minuto;
    tempoFinal = (hora * 60) + minuto;

    if( tempoFinal <= tempoInicial)
        tempoFinal += (24 * 60);

    minutosTotais = tempoFinal - tempoInicial;

    cout << "O JOGO DUROU " << (minutosTotais/60) << " HORA(S) E " << (minutosTotais%60) << " MINUTO(S)\n";

    return 0;
}
