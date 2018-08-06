#include <iostream>
#include <cmath>

using namespace std;

struct status {
    int bs, iv, ev;
};

class Pokemon {
    public:
    string nome;
    int nivel;
    struct status HP,AT,DF,SP;

    void displayS( struct status& s) {
        cout << (int)((s.iv+s.bs+(pow(s.ev,0.5)/8))*nivel/50)+ 5;
        cout << "\n";
    }
    void displayHP( ) {
        cout << (int)((HP.iv+HP.bs+(pow(HP.ev,0.5)/8)+50)*nivel/50)+10;
        cout << "\n";
    }
};

int main() {
    int t;
    cin >> t;

    for( int i = 1; i <= t; i++ ) {
        struct Pokemon pokemon;
        cin >> pokemon.nome;
        cin >> pokemon.nivel;
        cin >> pokemon.HP.bs >> pokemon.HP.iv >> pokemon.HP.ev;
        cin >> pokemon.AT.bs >> pokemon.AT.iv >> pokemon.AT.ev;
        cin >> pokemon.DF.bs >> pokemon.DF.iv >> pokemon.DF.ev;
        cin >> pokemon.SP.bs >> pokemon.SP.iv >> pokemon.SP.ev;

        cout << "Caso #" << i << ": " << pokemon.nome << " nivel " << pokemon.nivel << "\n";
        cout << "HP: "; pokemon.displayHP();
        cout << "AT: "; pokemon.displayS(pokemon.AT);
        cout << "DF: "; pokemon.displayS(pokemon.DF);
        cout << "SP: "; pokemon.displayS(pokemon.SP);
    }

    return 0;
}
