#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        double val1,val2,val3;
        cin >> val1 >> val2 >> val3;
        cout << fixed << setprecision(1) << ( ((val1*2) + (val2*3) + (val3*5)) / 10 ) << "\n";
    }
    return 0;
}
