#include <iostream>
#include <ctime>

using namespace std;

tm criaTm(int dia, int hora, int minuto, int segundo);

int main() {
    // Leitura
    string diatext;
    char separador;
    int numero;
    int diames, horames, minutomes, segundomes;

    cin >> diatext;
    cin >> numero;
    diames = numero;

    cin >> numero;
    horames = numero;
    cin >> separador;
    cin >> numero;
    minutomes = numero;
    cin >> separador;
    cin >> numero;
    segundomes = numero;

    struct tm dia1 = criaTm(diames,horames,minutomes,segundomes);

    cin >> diatext;
    cin >> numero;
    diames = numero;
    cin >> numero;
    horames = numero;
    cin >> separador;
    cin >> numero;
    minutomes = numero;
    cin >> separador;
    cin >> numero;
    segundomes = numero;
    struct tm dia2 = criaTm(diames,horames,minutomes,segundomes);

    // Calcula diferença em segundos utilizando difftime <ctime>
    time_t comeco = mktime(&dia1);
    time_t fim = mktime(&dia2);
    double diferenca = difftime(fim, comeco);

    // Conversao para a saida
    int dias, horas, minutos, segundos;
    dias = horas = minutos = segundos = 0;
    minutos = diferenca / 60;
    segundos = (int)diferenca % 60;

    horas = minutos / 60;
    minutos = minutos % 60;

    dias = horas / 24;
    horas = horas % 24;

    cout << dias << " dia(s)\n";
    cout << horas << " hora(s)\n";
    cout << minutos << " minutos(s)\n";
    cout << segundos << " segundo(s)\n";



    return 0;

}

struct tm criaTm(int dia, int hora, int minuto, int segundo)
{
    time_t temp;
    struct tm diaData;

    time(&temp);
    diaData = *localtime(&temp);
    diaData.tm_sec = segundo;
    diaData.tm_min = minuto;
    diaData.tm_hour = hora;
    diaData.tm_mday = dia;

    return diaData;
}
