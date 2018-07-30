#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double s = 0;
    int divisor = 1;
    for( double i = 1; i <= 39; i += 2 ) {
        s += ( i / divisor );
        divisor *= 2;
    }
    cout << fixed << setprecision(2);
    cout << s << "\n";
    return 0;
}
