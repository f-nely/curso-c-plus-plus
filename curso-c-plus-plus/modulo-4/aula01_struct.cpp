#include <iostream>
#include <string.h>

using namespace std;

struct Locadora
{
    char titulo[30];
    int anoLacamento;

}

alugar1 = {"Velozes e Furiosos", 2020},
alugar2 = {"Harry Potter", 2018};

int main()
{
    /*cout << "Informe o título do filme: ";
    cin.getline(alugar1.titulo, 30);

    cout << "Informe o ano do filme: ";
    cin >> alugar1.anoLacamento;

    cout << "\n";
    cout << "Exibindo dados: ";
    cout << "\n";

    cout << "O filme se chama: " << alugar1.titulo << "\n";
    cout << "O ano de lançamento é: " << alugar1.anoLacamento << "\n";*/

    cout << "Dados da Estrutura alugar1: \n";
    cout << "Nome 1º filme: " << alugar1.titulo << endl;
    cout << "Ano do 1º filme: " << alugar1.anoLacamento << endl;

    cout << "\nDados da Estrutura alugar2: \n";
    cout << "Nome 2º filme: " << alugar2.titulo << endl;
    cout << "Ano do 2º filme: " << alugar2.anoLacamento << endl;

    return 0;
}
