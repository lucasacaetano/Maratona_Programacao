#include <iostream>
#include <string>

using namespace std;

int main() {
    string citacao = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int n;
    cin >> n;

    for( int i = 0; (i < citacao.length() && i < n); i++ ) {
        cout << citacao[i];
    }
    cout << "\n";
    return 0;
}
