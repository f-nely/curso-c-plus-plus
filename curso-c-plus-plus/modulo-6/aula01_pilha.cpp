#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Elementos
{
    int dados;
    Elementos * seguinte;
};

void inserirPilha(Elementos *&, int);

void deletarPilha(Elementos *&, int);

int main()
{
    Elementos *pilha = NULL;

    int dados;

    cout << "Informe um valor: ";
    cin >> dados;
    inserirPilha(pilha, dados);

    cout << "Informe outro valor: ";
    cin >> dados;
    inserirPilha(pilha, dados);

    cout << "\n";

    while (pilha != NULL) {

        deletarPilha(pilha, dados);

        if (pilha != NULL) {
            cout << dados << " - ";
        } else {
            cout << " . ";
        }
    }

    return 0;
}

void inserirPilha(Elementos *&pilha, int n)
{
    Elementos *novoElemento = new Elementos();

    novoElemento ->dados = n;
    novoElemento ->seguinte = pilha;
    pilha = novoElemento;

    cout << "Valor " << n << " adicionado com sucesso." << endl;
}

void deletarPilha(Elementos *&pilha, int n)
{
    Elementos *aux = pilha;
    n = aux ->dados;
    pilha = aux ->seguinte;
    delete aux;
}
