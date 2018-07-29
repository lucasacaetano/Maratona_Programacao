#include <iostream>
#include <set>

int main(){
    int v1,v2,v3;
    std::set<int> conjunto;
    std::cin >> v1 >> v2 >> v3;

    // Utiliza estrutura de set
    conjunto.insert(v1);
    conjunto.insert(v2);
    conjunto.insert(v3);
    for(std::set<int>::iterator it = conjunto.begin(); it!= conjunto.end(); ++it)
        std::cout << *it << "\n";

    std::cout << "\n" << v1 << "\n" << v2 << "\n" << v3 << "\n";
    return 0;
}
