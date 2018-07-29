#include <iostream>
#include <iomanip>
#include <cstdio>

/*
Cout do round to even
printf truncate the number
*/
float n1,n2,n3,n4;

int main()
{
    std::cin >> n1 >> n2 >> n3 >> n4;
    std::cout << std::fixed << std::setprecision(1);
    float media = ((n1*2) + (n2*3) + (n3*4) + (n4*1) )/(10.0);
    printf("Media: %.1f\n",media);

    if( media >= 7.0) {
        std::cout << "Aluno aprovado.\n";
    }
    else if (media < 5.0) {
        std::cout << "Aluno reprovado.\n";
    }
    else {
        std::cout << "Aluno em exame.\n";
        float exame;
        std::cin >> exame;
        printf("Nota do exame: %.1f\n", exame);
        media = (media + exame)/2;
        if (media >= 5) std::cout << "Aluno aprovado.\n";
        else std::cout << "Aluno reprovado.\n";
        printf("Media final: %.1f\n",media);
    }

    return 0;
}
