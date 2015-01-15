#include <iostream>

using namespace std;

int i,j;

int main (void){
    cin >> i >> j;
    while (!cin.eof()){
        int total,num, maior = 0;
        cout << i << " " << j << " ";
        for (int ini = min(i,j); ini<=max(i,j);ini ++){
            for(total=1, num = ini;num != 1 ;){
                if (num%2 ==0)
                    num = num/2;
                else
                    num = 3*num+1;
                total+=1;
            }
            maior = max(maior,total);
        }
        cout << maior << "\n";
        cin >> i >> j;
    }
    return 0;
}
