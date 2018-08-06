#include <iostream>
#include <cstdlib>

using namespace std;

class Racional{
    int numerador, denominador;
    int gcd(int, int);
public:
    Racional(int n1, int n2) {
        numerador = n1;
        denominador = n2;
    }
    Racional() { numerador = denominador = 0;}
    Racional operator + (const Racional&);
    Racional operator - (const Racional&);
    Racional operator * (const Racional&);
    Racional operator / (const Racional&);
    void display() {cout << numerador << "/" << denominador;}
    void displaySimplified() {
        int fator = gcd(max(abs(numerador), abs(denominador) ), min(abs(numerador), abs(denominador)) );
        cout << numerador/fator << "/" << denominador/fator;
    }

};

Racional Racional::operator+ (const Racional& param) {
    Racional temp;
    temp.denominador = (denominador * param.denominador);
    temp.numerador = ((numerador * param.denominador) + (param.numerador * denominador));
    return temp;
}

Racional Racional::operator- (const Racional& param) {
    Racional temp;
    temp.denominador = (denominador * param.denominador);
    temp.numerador = ((numerador * param.denominador) - (param.numerador * denominador));
    return temp;
}

Racional Racional::operator* (const Racional& param) {
    Racional temp( (numerador * param.numerador), (denominador * param.denominador) );
    return temp;
}

Racional Racional::operator/ (const Racional& param) {
    Racional temp( (numerador * param.denominador), (denominador * param.numerador) );
    return temp;
}

/**
 * gcd()
 * Algoritmo de Euclides aprimorado para encontrar o maior divisor comum
 * fonte: https://en.wikipedia.org/wiki/Euclidean_algorithm#Procedure
 * @param int a maior dos dois números
 * @param int b menor dos dois números
 * @return int maior divisor comum entre a e b
 */
int Racional::gcd(int a, int b) {
    if( b == 0 )
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    while( n-- ) {
        int numerador, denominador;
        char barra, operacao;

        cin >> numerador >> barra >> denominador;
        Racional numero1(numerador, denominador);

        cin >> operacao;
        cin >> numerador >> barra >> denominador;
        Racional numero2(numerador, denominador);

        Racional resultado;
        switch(operacao) {
            case '+':
                resultado = numero1 + numero2;
                break;
            case '-':
                resultado = numero1 - numero2;
                break;
            case '*':
                resultado = numero1 * numero2;
                break;
            case '/':
                resultado = numero1 / numero2;
                break;
        }
        resultado.display();
        cout << " = ";
        resultado.displaySimplified();
        cout << "\n";
    }
    return 0;
}
