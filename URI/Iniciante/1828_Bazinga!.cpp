#include <iostream>

using namespace std;

int main() {
    int t;
    string sheldon, raj;
    enum GameResult {SHELDON_WON, RAJ_WON, DRAW} resultado;
    cin >> t;
    for( int i = 1; i <= t; i++ ) {
        cin >> sheldon >> raj;

        if( sheldon == raj) {
            resultado = DRAW;
        } else if(sheldon == "tesoura") {
            if( (raj == "papel") || (raj == "lagarto") ) {
                resultado = SHELDON_WON;
            } else if( (raj == "Spock") || (raj == "pedra") ){
                resultado = RAJ_WON;
            }
        } else if( sheldon == "papel" ) {
            if( (raj == "pedra") || (raj == "Spock") ) {
                resultado = SHELDON_WON;
            }else if( (raj == "tesoura") || (raj == "lagarto") ) {
                resultado = RAJ_WON;
            }
        } else if( sheldon == "pedra" ) {
            if( (raj == "lagarto") || (raj == "tesoura") ) {
                resultado = SHELDON_WON;
            }else if( (raj == "papel") || (raj == "Spock") ) {
                resultado = RAJ_WON;
            }
        } else if( sheldon == "lagarto" ) {
            if( (raj == "Spock") || (raj == "papel") ) {
                resultado = SHELDON_WON;
            }else if( (raj == "pedra") || (raj == "tesoura") ) {
                resultado = RAJ_WON;
            }
        } else if( sheldon == "Spock"){
            if( (raj == "tesoura") || (raj == "pedra") ) {
                resultado = SHELDON_WON;
            }else if( (raj == "lagarto") || (raj == "papel") ) {
                resultado = RAJ_WON;
            }
        }

        cout << "Caso #" << i << ": ";
        switch( resultado ) {
            case SHELDON_WON:
                cout << "Bazinga!\n";
                break;
            case RAJ_WON:
                cout << "Raj trapaceou!\n";
                break;
            case DRAW:
                cout << "De novo!\n";
                break;
        }
    }
    return 0;
}
