#include <iostream>
#include <iomanip>

int main()
{
    int idade;
    std::cin >> idade;
    int qtd = 0,total=0;
    while ( idade >= 0){
        qtd++;
        total += idade;
        std::cin >> idade;
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << (double)total/qtd << "\n";
    return 0;
}
