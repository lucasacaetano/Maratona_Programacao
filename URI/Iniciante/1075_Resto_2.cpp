#include <iostream>

using namespace std;

int main() {
    int n, val = 0;
    cin >> n;
    for( int i = 1; i < n+3 && val == 0; i++){
        if( i % n == 2) val = i;
    }

    while( val <= 10000 ) {
        cout << val << "\n";
        val += n;
    }

    return 0;
}
