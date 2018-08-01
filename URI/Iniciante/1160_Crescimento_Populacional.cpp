#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int pa, pb, i;
        double ga, gb;
        cin >> pa >> pb >> ga >> gb;

        for( i = 0; i <= 100 && pa <= pb; i++ ) {
            pa = pa + (int)( pa*(ga/100) );
            pb = pb + (int)( pb*(gb/100) );
        }

        if( i <= 100 ) cout << i << " anos.\n";
        else cout << "Mais de 1 seculo.\n";

    }
    return 0;
}
