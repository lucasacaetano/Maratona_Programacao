#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    double salario, parcela, impostoTotal =0;

    cin >> salario;

    // imposto entre 2000 e 3000
    if( salario > 2000 ) {
        parcela = min(salario, 3000.0);
        impostoTotal += (parcela - 2000) * 0.08;
    }
    // imposto entre 3000 e 4500
    if( salario > 3000 ) {
        parcela = min(salario, 4500.0);
        impostoTotal += (parcela - 3000) * 0.18;
    }
    // imposto acima de 4500
    if( salario > 4500 ) {
        impostoTotal += (salario - 4500.0) * 0.28;
    }

    if( impostoTotal == 0)
        cout << "Isento\n";
    else{
        cout << fixed << setprecision(2) << "R$ " << impostoTotal << "\n";
    }

    return 0;
}
