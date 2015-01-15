/*
ID: lucas.a1
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int i,n,max=-1,soma=0,indicep,indicea,acha,auxp,auxa,auxsoma;
    char procura[2]={'b','r'};
    string colar;

    fin >> n >> colar;
    colar+=colar+colar;
    for (i=n;i<n*2 && soma != n;i++){
        if (colar[i]=='w') continue;
        if (colar[i]=='b') acha = 1;
        else acha = 0;
        indicep = colar.find(procura[acha],i+1);
        if (indicep == string::npos){
           soma = n;
        }
        else{
             indicea = colar.rfind(procura[acha],i-1);
             soma = indicep-indicea-1;
             if (acha ==1 ) acha = 0;
             else acha = 1;
             auxa=colar.find(procura[acha],indicea-1);
             auxsoma = indicea-auxa;
             auxp = colar.find(procura[acha],indicep+1);
             if (auxsoma < auxp - indicep)
                auxsoma = auxp - indicep;
             soma += auxsoma;
             if (max < soma ) max = soma;
        }
    }
    if (max==-1)max = n;
    fout << max << endl;
    return 0;
}
