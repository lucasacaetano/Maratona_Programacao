#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;

    while( (cin >> n) && (n != 0) ) {
        for( int i = 0; i < n; i++ ) {
            for( int j = 0; j < n; j++ ) {
                cout << setw(3);
                if( i == j ) {
                    cout << 1;
                } else {
                    cout << abs(i - j) + 1;
                }
                ( j == (n-1) ) ? cout << "\n" : cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
