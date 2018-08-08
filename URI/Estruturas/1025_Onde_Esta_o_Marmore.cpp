#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n,q,marmore, caso = 1;
    pair< vector<int>::iterator, vector<int>::iterator > it;
    do{
        cin >> n >> q;
        if( n == 0 || q == 0)
            break;

        vector<int> m;
        for( int i = 0; i < n; i++ ) {
            cin >> marmore;
            m.push_back( marmore );
        }

        sort(m.begin(), m.end());

        cout << "CASE# " << caso++ << ":\n";
        for( int i = 0; i < q; i++ ) {
            cin >> marmore;
            if( binary_search(m.begin(), m.end(), marmore ) ) {
                it = equal_range( m.begin(), m.end(), marmore );
                cout << marmore
                    << " found at "
                    << ( (it.first - m.begin()) + 1 )
                    << "\n";
            } else {
                cout << marmore << " not found\n";
            }
        }

    }while( n != 0 && q != 0);
    return 0;
}
