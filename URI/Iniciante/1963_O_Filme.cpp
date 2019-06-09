#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double precoAntigo, precoNovo;
    cin >> precoAntigo >> precoNovo;
    double diferenca = precoNovo - precoAntigo;

    cout << setprecision(2) << fixed;
    cout << ( ( diferenca / precoAntigo ) * 100 ) << "%\n";
    return 0;
}
