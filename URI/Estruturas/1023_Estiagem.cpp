#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

int main() {
    int n, cidade = 1;
    cin >> n;
    while( n != 0 ) {
        int habitantes,consumo;
        map<int, int> habitantesConsumo;
        int consumoTotal = 0;
        int habitantesTotal = 0;
        for( int i = 0; i < n; i++ ) {
            cin >> habitantes >> consumo;
            int key = consumo / habitantes;
            if( habitantesConsumo.count(key) > 0)
                habitantesConsumo[key] += habitantes;
            else
                habitantesConsumo[key] = habitantes;

            consumoTotal += consumo;
            habitantesTotal += habitantes;
        }

        map<int,int>::iterator it = habitantesConsumo.begin();
        cout << "Cidade# " << cidade++ << ":\n";
        cout << it->second << "-" << it->first;
        ++it;
        while(  it != habitantesConsumo.end() ) {
            cout << " " << it->second << "-" << it->first;
            ++it;
        }
        cout << "\nConsumo medio: "
            << fixed << setprecision(2)
            << floor(((float)consumoTotal/habitantesTotal)*100) / 100
            << " m3.\n";
        cin >> n;
        if( n != 0) cout << "\n";
    }
}
