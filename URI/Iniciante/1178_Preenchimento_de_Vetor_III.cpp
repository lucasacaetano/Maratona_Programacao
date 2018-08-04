#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n;
    cin >> n;
    cout << fixed << setprecision(4);

    for( int i = 0; i < 100; i++ ) {
        cout << "N[" << i << "] = " << n << "\n";
        n = (n/2);
    }

    return 0;
}

