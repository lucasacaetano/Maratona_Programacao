#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int reajuste;
    double salario;

    cin >> salario;
    if( salario > 0 && salario <= 400 )
        reajuste = 15;
    else if( salario > 400 && salario <= 800 )
        reajuste = 12;
    else if( salario > 800 && salario <= 1200 )
        reajuste = 10;
    else if( salario > 1200 && salario <= 2000 )
        reajuste = 7;
    else if( salario > 2000 )
        reajuste = 4;
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << salario * (1 + (double)reajuste/100) << "\n";
    cout << "Reajuste ganho: " << salario * ((double)reajuste/100) << "\n";
    cout << "Em percentual: " << reajuste << " %\n";

    return 0;
}
