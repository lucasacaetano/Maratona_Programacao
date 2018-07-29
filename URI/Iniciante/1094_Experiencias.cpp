#include <iostream>
#include <iomanip>

using namespace std;

struct cobaias {
    int total;
    int ratos,sapos,coelhos;
};

int main() {
    int n;
    int quantidade;
    char tipo;

    struct cobaias Cobaias;
    Cobaias.total = Cobaias.ratos = Cobaias.sapos = Cobaias.coelhos = 0;

    cin >> n;
    while( n-- ) {
        cin >> quantidade >> tipo;
        Cobaias.total += quantidade;
        switch(tipo) {
            case 'C': Cobaias.coelhos += quantidade; break;
            case 'R': Cobaias.ratos += quantidade; break;
            case 'S': Cobaias.sapos += quantidade; break;
        }
    }

    cout << "Total: " << Cobaias.total << " cobaias\n";
    cout << "Total de coelhos: " << Cobaias.coelhos << "\n";
    cout << "Total de ratos: " << Cobaias.ratos << "\n";
    cout << "Total de sapos: " << Cobaias.sapos << "\n";
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (double) (Cobaias.coelhos * 100)/Cobaias.total << " %\n";
    cout << "Percentual de ratos: " << (double) (Cobaias.ratos * 100)/Cobaias.total << " %\n";;
    cout << "Percentual de sapos: " << (double) (Cobaias.sapos * 100)/Cobaias.total << " %\n";;

    return 0;
}
