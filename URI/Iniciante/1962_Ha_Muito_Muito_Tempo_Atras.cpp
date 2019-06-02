#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, anosTranscorridos;

    cin >> n;
    while(n--) {
        cin >> anosTranscorridos;
        int diferenca = (2015 - anosTranscorridos);
        if( diferenca <=0 )
            diferenca--;

        cout << abs(diferenca);
        cout << " " << ( diferenca < 0 ? "A.C." : "D.C." ) << "\n";
    }
    return 0;
}
