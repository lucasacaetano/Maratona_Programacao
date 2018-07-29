#include <iostream>

using namespace std;

int main() {
    int n,x, in, out;
    cin >> n;
    in = out = 0;
    while(n--){
        cin >> x;
        if( x >= 10 && x <= 20 )
            in++;
        else
            out++;
    }
    cout << in << " in\n";
    cout << out << " out\n";
    return 0;
}
