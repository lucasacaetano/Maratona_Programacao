#include <iostream>

int main(){
    int senha;

    std::cin >> senha;
    while(senha != 2002){
        std::cout << "Senha Invalida\n";
        std::cin >> senha;
    }
    std::cout << "Acesso Permitido\n";
    return 0;
}
