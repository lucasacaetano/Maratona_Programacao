#include <iostream>
#include <string>

using namespace std;

int main() {
    int c;
    cin >> c;
    while(c--) {
        string nome;
        int forca;
        cin >> nome >> forca;

        if( nome.compare("Thor") == 0 ) cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}
