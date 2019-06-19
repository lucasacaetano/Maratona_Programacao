#include <iostream>

using namespace std;

int main() {
    int saida, tempo, fuso;
    cin >> saida >> tempo >> fuso;
    int hora = saida + tempo + fuso;
    cout << (hora < 0 ? ((24 + hora)% 24) : (hora% 24)  );
    cout << "\n";
    return 0;
}
