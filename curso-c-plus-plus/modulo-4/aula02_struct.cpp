#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct cadastroPessoa
{
    char nome[30];
    char sexo[30];
    char endereco[50];
};

struct Locadora
{
    char titulo[30];
    struct cadastroPessoa infoNome;
    int ano;
}locadora[2];

int main()
{
    for (int i = 0; i < 2; i++) {

        //fflush(stdin);

        cout << "Informe o nome do filme: " << endl;
        cin.getline(locadora[i].titulo, 30);

        cout << "Informe o nome: " << endl;
        cin.getline(locadora[i].infoNome.nome, 30);

        cout << "Informe o sexo: " << endl;
        cin.getline(locadora[i].infoNome.sexo, 30);

        cout << "Informe o endereço: " << endl;
        cin.getline(locadora[i].infoNome.endereco, 50);

        cout << "Informe o ano do filme: " << endl;
        cin >> locadora[i].ano;

        cin.ignore();

        cout << endl;

    }

    // exibir dados

    for (int i = 0; i < 2; i++) {

        cout << "Exibindo Dados Dos Filmes" << "\n";
        cout << "Título do filme: " << locadora[i].titulo << endl;
        cout << "Nome do filme: " << locadora[i].ano << endl;

        cout << "Exibindo Dados Pessoa" << "\n";
        cout << "Nome:" << locadora[i].infoNome.nome << endl;
        cout << "Sexo:" << locadora[i].infoNome.sexo << endl;
        cout << "Endereço:" << locadora[i].infoNome.endereco << endl;
    }

    return 0;
}
