#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int qtdProdutos, produto, quantidade;
    double preco[] = {1.5, 2.5, 3.5, 4.5, 5.5}, total = 0.0;

    cin >> qtdProdutos;
    while(qtdProdutos--){
        cin >> produto >> quantidade;
        total += (quantidade * preco[(produto % 1000) - 1]);
    }

    cout << fixed << setprecision(2);
    cout << total << "\n";

    return 0;
}
