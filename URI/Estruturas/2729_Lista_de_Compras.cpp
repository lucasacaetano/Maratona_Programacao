#include <iostream>
#include <set>
#include <sstream>
#include <vector>

/**
 * split
 * função para dividir uma string de acordo com o delimitador
 */
std::vector<std::string> splitString( std::string strToSplit, char delimiter)
{
    std::stringstream ss(strToSplit);
    std::string item;
    std::vector<std::string> splittedString;
    while( std::getline(ss, item, delimiter) ) {
        splittedString.push_back(item);
    }
    return splittedString;
}

int main(){
    int n;
    std::cin >> n;
    std::cin.ignore();

    while(n--){
        std::string line;
        std::set<std::string> lista;
        std::set<std::string>::iterator setIt;

        std::getline(std::cin, line);
        std::vector<std::string> splittedStrings = splitString(line, ' ');
        // Insere a lista em um set
        for(int i=0; i < splittedStrings.size(); i++)
            lista.insert(splittedStrings[i]);

        // Lista o set
        setIt = lista.begin();
        std::cout << *setIt;
        setIt++;
        for( ; setIt != lista.end(); ++setIt){
            std::cout << ' ' << *setIt;
        }
        std::cout << "\n";
    }
    return 0;
}
