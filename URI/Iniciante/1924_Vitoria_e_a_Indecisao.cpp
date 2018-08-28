#include <iostream>

using namespace std;

int main() {
    int n;
    string curso;

    cin >> n;
    while( n-- ) {
        cin.ignore();
        getline(cin, curso);
    }
    cout << "Ciencia da Computacao\n";
    return 0;
}
