#include <iostream>

using namespace std;

int main() {
    int primeiro, segundo, terceiro;
    cin >> primeiro >> segundo >> terceiro;
    int delta1 = segundo - primeiro;
    int delta2 = terceiro-segundo;
    enum {FELIZ, TRISTE} humor;

    // Descida do 1° para o 2° dia
    if( delta1 < 0 ) {
        if(delta2 >= 0) humor = FELIZ;
        if( (delta2 < 0) &&(delta2 > delta1) ) humor = FELIZ;
        if( (delta2 < 0) &&(delta2 <= delta1) ) humor = TRISTE;
    }
    // Subida do 1° para o ° dia
    if( delta1 > 0 ) {
        if(delta2 <= 0) humor = TRISTE;
        if( (delta2 > 0) && (delta2 < delta1) ) humor = TRISTE;
        if( (delta2 > 0) && (delta2 >= delta1) ) humor = FELIZ;
    }
    if( (delta1 == 0) ) {
        if(delta2 > 0) humor = FELIZ;
        else humor = TRISTE;
    }

    cout << (( humor == FELIZ ) ? ":)" : ":(");
    cout << "\n";

    return 0;
}
