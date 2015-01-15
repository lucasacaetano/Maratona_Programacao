/*
ID: lucas.a1
PROG: milk2
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> pares;

int n,maximo,minimo;
pares maior,menor;
vector< pares > farmers(1);

int main(){
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    fin >> n;

        maximo = 0;
        minimo = 0;
        farmers.resize(n);
        for (int i=0;i<n;i++){
            fin >> farmers[i].first >> farmers[i].second;
        }
        sort(farmers.begin(),farmers.end());
        maior.first = farmers[0].first;
        maior.second = farmers[0].second;
        maximo = max(maximo, (maior.second-maior.first));
        menor.first = menor.second = farmers[0].second;
        for (int i=1;i<n;i++){
            if (farmers[i].first <= maior.second){
                if (farmers[i].second > maior.second){
                    maior.second = farmers[i].second;
                    menor.first = menor.second = farmers[i].second;
                }
            }
            else{
                menor.second = farmers[i].first;
                minimo = max(minimo,(menor.second-menor.first));
                menor.first = farmers[i].second;
                maior.first = farmers[i].first;
                maior.second = farmers[i].second;
            }

            maximo = max(maximo, (maior.second-maior.first) );
        }

        fout << maximo << " " << minimo << "\n";


    return 0;
}
