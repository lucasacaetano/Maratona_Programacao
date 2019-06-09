#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if( a == b ) cout << a  << "\n";
    else cout << ( (a < b) ? b : a ) << "\n";
    return 0;
}
