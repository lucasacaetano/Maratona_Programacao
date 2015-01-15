#include <iostream>

using namespace std;

int main (void){
    int n,m,x=1;
    cin >> n >> m;
    while(n!=0 && m!=0){
        int field[n+2][m+2];
        char mina;
        if (x!=1)   cout << "\n";
        //recebe as entradas
        for (int i=1;i<n+1;i++){
            for (int j =1;j<m+1;j++){
                cin >> mina;
                if (mina =='.')
                    field[i][j]=0;
                else
                    field[i][j]=-1;
            }
        }
        //varre o campo e arruma os valores
        for (int i=1;i<n+1;i++){
            for (int j =1;j<m+1;j++){
                if (field[i][j]==-1){
                    //muda as vizinhanças gama 8
                    if (field[i-1][j-1]!=-1) field[i-1][j-1]++;
                    if (field[i-1][j]!=-1) field[i-1][j]++;
                    if (field[i-1][j+1]!=-1) field[i-1][j+1]++;
                    if (field[i+1][j-1]!=-1) field[i+1][j-1]++;
                    if (field[i+1][j]!=-1) field[i+1][j]++;
                    if (field[i+1][j+1]!=-1) field[i+1][j+1]++;
                    if (field[i][j-1]!=-1) field[i][j-1]++;
                    if (field[i][j+1]!=-1) field[i][j+1]++;
                }
            }
        }

        //imprime o campo
        cout << "Field #"<<x++<<":\n";
        for (int i=1;i<n+1;i++){
            for (int j =1;j<m+1;j++){
                if (field[i][j]!=-1)
                    cout << field[i][j];
                else
                    cout << '*';
            }
            cout << "\n";
        }
        cin >> n >> m;
    }
    return 0;
}
