#include <iostream>

using namespace std;

int main() {
    string caracteristica1, caracteristica2, caracteristica3;

    cin >> caracteristica1;
    cin >> caracteristica2;
    cin >> caracteristica3;

    if( caracteristica1.compare("vertebrado") == 0 ) {
        if( caracteristica2.compare("ave") == 0 ) {
            if( caracteristica3.compare("carnivoro") == 0 )
                cout << "aguia\n";
            else
                cout << "pomba\n";
        } else {
            if( caracteristica3.compare("onivoro") == 0)
                cout << "homem\n";
            else
                cout << "vaca\n";
        }
    } else {
        if( caracteristica2.compare("inseto") == 0 ) {
            if( caracteristica3.compare("hematofago") == 0 )
                cout << "pulga\n";
            else
                cout << "lagarta\n";
        } else {
            if( caracteristica3.compare("hematofago") == 0 )
                cout << "sanguessuga\n";
            else
                cout << "minhoca\n";
        }

    }
    return 0;
}
