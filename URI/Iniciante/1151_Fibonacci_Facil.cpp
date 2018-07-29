#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int fibn = 1, fibn1 = 0, temp;

    cout << 0;
    for( int i = 1; i < n; i++ ) {
        cout << " " << fibn;
        temp = fibn + fibn1;
        fibn1 = fibn;
        fibn = temp;
    }
    cout << "\n";

    return 0;
}
