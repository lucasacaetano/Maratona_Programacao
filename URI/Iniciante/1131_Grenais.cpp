#include <iostream>

using namespace std;

int main() {
    int grenais = 0, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;
    int golInter, golGremio, repetir = 1;
    while( repetir == 1 ) {
        grenais++;
        cin >> golInter >> golGremio;

        if( golInter > golGremio ) vitoriasInter++;
        else if( golInter < golGremio ) vitoriasGremio++;
        else empates++;

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> repetir;
    }

    cout << grenais << " grenais\n";
    cout << "Inter:" << vitoriasInter << "\n";
    cout << "Gremio:" << vitoriasGremio << "\n";
    cout << "Empates:" << empates << "\n";

    if( vitoriasInter > vitoriasGremio ) cout << "Inter venceu mais\n";
    else if( vitoriasInter < vitoriasGremio ) cout << "Gremio venceu mais\n";
    else cout << "Nao houve vencedor\n";

    return 0;
}
