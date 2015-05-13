//http://br.spoj.com/problems/SOMA/
//nome / id : SOMA / 3830
#include <iostream>

using std::cin;
using std::cout;

int main (){
    int n,soma=0,x;

    cin >> n;
    while(n--){
        cin >> x;
        soma+=x;
    }
    cout << soma << "\n";
    return 0;
}
