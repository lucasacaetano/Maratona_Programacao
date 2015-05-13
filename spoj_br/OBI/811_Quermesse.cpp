//http://br.spoj.com/problems/QUERM/
//codigo/id: QUERM / 811
#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int N,teste = 1;
    cin >> N;
    while (N!=0)
    {
        cout << "Teste "<< teste++ << "\n";
        for (int i = 1; i<=N ; i++)
        {
            int ingresso;
            cin >> ingresso;
            //verifica se o ingresso e o vencedor
            if (i == ingresso)
                cout << ingresso << "\n";
        }
        cout << "\n";

        cin >> N;
    }

    return 0;
}
