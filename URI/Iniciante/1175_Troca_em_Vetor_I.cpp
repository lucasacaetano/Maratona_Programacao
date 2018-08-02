#include <iostream>

using namespace std;

int main() {
    int n[20];
    for( int i = 0; i < 20; i++ ) {
        cin >> n[i];
    }

    int temp;
    for( int i = 0; i < 10; i++ ) {
        temp = n[i];
        n[i] = n[19 - i];
        n[19 - i] = temp;
    }

    for( int i = 0; i < 20; i++ ) {
        cout << "N[" << i << "] = " << n[i] << "\n";
    }
    return 0;
}

