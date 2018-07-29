#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for( int j = 0; j < n; j++ ) {
        for( int i = 1; i <= 3; i++ ) {
            cout << i + (j*4) << " ";
        }
        cout << "PUM\n";
    }

    return 0;
}
