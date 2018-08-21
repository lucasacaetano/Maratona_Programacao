#include <iostream>

using namespace std;

int main() {
    int a, b, q, r;
    cin >> a >> b;

    for( r = 0; r < abs(b); r++) {
        if( ((a-r)%b) == 0) {
            q = (a-r) / b;
            break;
        }
    }

    cout << q << " " << r << "\n";
    return 0;
}
