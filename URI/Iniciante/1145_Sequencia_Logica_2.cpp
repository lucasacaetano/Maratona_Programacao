#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    for( int i = 1, j = 1; i <= y; i++, j++ ) {
        cout << i;
        if( j == x ) {
            cout << "\n";
            j = 0;
        }
        else {
            cout << " ";
        }
    }
    return 0;
}
