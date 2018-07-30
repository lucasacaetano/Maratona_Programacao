#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double s = 0;
    for( int i = 1; i <= 100; i++ ) {
        s += (1/(double)i);
    }
    cout << fixed << setprecision(2);
    cout << s << "\n";
    return 0;
}
