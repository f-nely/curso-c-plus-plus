#include <iostream>
#include <string.h>

using namespace std;

struct Locadora
{
    char titulo[30];
    int anoLacamento;

}alugar1, alugar2;

int main()
{
    cout << "Informe o título do filme: ";
    cin.getline(alugar1.titulo, 30);

    cout << "Informe o ano do filme: ";
    cin >> alugar1.anoLacamento;

    cout << "\n";
    cout << "Exibindo dados: ";
    cout << "\n";

    cout << "O filme se chama: " << alugar1.titulo << "\n";
    cout << "O ano de lançamento é: " << alugar1.anoLacamento << "\n";

    return 0;
}
