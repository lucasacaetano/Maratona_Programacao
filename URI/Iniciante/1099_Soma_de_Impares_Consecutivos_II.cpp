#include <iostream>

using namespace std;

int main() {
    int n,x,y;

    cin >> n;
    while(n--){
        cin >> x >> y;
        int i, soma = 0;

        if(x > y) {
            i = x;
            x = y;
            y = i;
        }
        if(x%2 == 0) i = x+1;
        else i = x+2;

        while(i < y){
            soma+=i;
            i+=2;
        }
        cout << soma << "\n";;
    }
    return 0;
}
