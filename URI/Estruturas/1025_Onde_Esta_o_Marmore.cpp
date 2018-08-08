#include <iostream>
#include <set>

using namespace std;

int main() {
    int n,q,marmore, caso = 1;
    do{
        cin >> n >> q;
        if( n == 0 || q == 0)
            break;

        multiset<int> conjuntoMarmores;
        multiset<int>::iterator it;
        for( int i = 0; i < n; i++ ) {
            cin >> marmore;
            conjuntoMarmores.insert( marmore );
        }

        cout << "CASE# " << caso++ << ":\n";
        for( int i = 0; i < q; i++ ) {
            cin >> marmore;
            it = conjuntoMarmores.find( marmore );

            if( it == conjuntoMarmores.end() ) {
                cout << marmore << " not found\n";
            } else {
                cout << marmore
                    << " found at "
                    << ( distance(conjuntoMarmores.begin(), it) + 1 )
                    << "\n";
            }
        }

    }while( n != 0 && q != 0);
    return 0;
}
