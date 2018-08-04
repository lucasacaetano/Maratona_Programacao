#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    cout << "N[0] = 0\n";
    for(int i = 1; i < 1000; i++ ) {
        cout << "N[" << i << "] = " << (i % t) << "\n";;
    }
    return 0;
}
