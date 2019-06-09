#include <iostream>

using namespace std;

int main(){
    int n, matricula, matriculaEscolhido = -1;
    float nota, notaEscolhido = 0.0;
    cin >> n;
    while( n-- ) {
        cin >> matricula >> nota;
        if( nota >= 8.0 && nota > notaEscolhido ) {
            matriculaEscolhido = matricula;
            notaEscolhido = nota;
        }
    }
    if(matriculaEscolhido != -1)
        cout << matriculaEscolhido;
    else
        cout << "Minimum note not reached";

    cout << "\n";
    return 0;
}
