/*
ID: lucas.a1
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n,semana[7],mes,ano,i;
    fin >> n;
    for (i=0;i<7;i++) semana[i]=0;
    i=0;
    for (ano=1900;ano<1900+n;ano++){
        for (mes = 1;mes <=12;mes++){
            semana[i]++;
            if (mes < 8){
                if (mes%2==1) i+=3;
                else {
                    if (mes !=2) i +=2;
                    else {
                        if (ano%400==0 || (ano%100!=0 && ano%4==0) ) i+=1;
                    }
                }
            }
            else{
                if (mes % 2 ==1) i+=2;
                else i+=3;
            }
            if (i>=7) i%=7;
        }
    }
    for (i=0;i<7;i++){
        fout << semana[i];
        if (i!=6) fout << " ";
    }
    fout << endl;
    return 0;
}
