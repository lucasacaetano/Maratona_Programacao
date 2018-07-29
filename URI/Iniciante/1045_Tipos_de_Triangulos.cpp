#include <iostream>
#include <set>

using namespace std;

int main() {
    double a,b,c;
    double lados[3];

    cin >> a >> b >> c;

    lados[0] = a;
    lados[1] = b;
    lados[2] = c;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(lados[i] > lados[j]) {
                double temp = lados[i];
                lados[i] = lados[j];
                lados[j] = temp;
            }
        }
    }

    a = lados[0];
    b = lados[1];
    c = lados[2];

    if( a >= (b + c) )
        cout << "NAO FORMA TRIANGULO\n";
    else{
        if( (a*a) == (b*b + c*c) ) cout << "TRIANGULO RETANGULO\n";
        if( (a*a) > (b*b + c*c) ) cout << "TRIANGULO OBTUSANGULO\n";
        if( (a*a) < (b*b + c*c) ) cout << "TRIANGULO ACUTANGULO\n";

        if( a == b && b == c && a == c )
            cout << "TRIANGULO EQUILATERO\n";
        else if( a == b || b         == c || c == a )
            cout << "TRIANGULO ISOSCELES\n";

    }
    return 0;
}
