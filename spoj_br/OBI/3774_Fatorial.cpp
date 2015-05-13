//http://br.spoj.com/problems/FATORIA2/
//codigo / id : FATORIA2 / 3774
//utiliza função recursiva para calcular fatorial
#include <iostream>

using std::cin;
using std::cout;

int fatorial(int num){
    int result;
    if ( (num == 0) || (num ==1 ) ){
        result = 1;
    }
    else{
        result = num * fatorial(num-1);
    }
    return result;
}

int main(){
    int n;

    cin >> n;
    cout << fatorial(n) << "\n";

    return 0;
}
