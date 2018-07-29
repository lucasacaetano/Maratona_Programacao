#include <iostream>

using namespace std;

int main() {
    for( int i=0; i*5 <= 60; i++ ) {
        cout << "I=" << (1+i*3) << " J=" << (60-5*i) << "\n";
    }
    return 0;
}
