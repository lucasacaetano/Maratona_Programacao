#include <iostream>

using namespace std;

int main()
{
    int n,numero;

    cin >> n;
    while(n--){
        cin >> numero;

        if( numero == 0 ) {
            cout << "NULL\n";
        } else {
            if( numero % 2 == 0) {
                cout << "EVEN";
            } else {
                cout << "ODD";
            }

            if( numero > 0 ) {
                cout << " POSITIVE\n";
            } else {
                cout << " NEGATIVE\n";
            }
        }
    }
    return 0;
}
