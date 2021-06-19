#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Elementos
{
    int dados;
    Elementos *seguinte;
};

void inserirValor(Elementos *&, Elementos *&, int);

bool isEmpty(Elementos *);

void deletarValor(Elementos *&, Elementos *&, int );

int main()
{
    Elementos *inicio = NULL;
    Elementos *fim = NULL;

    int valorInformado;

    for (int i = 0; i < 3; i++) {
        cout << "Informe um valor: ";
        cin >> valorInformado;
        inserirValor(inicio, fim, valorInformado);

        while (inicio != NULL) {

            deletarValor(inicio, fim, valorInformado);

            if (inicio != NULL) {
                cout << valorInformado << " - ";
            } else {
                cout << " - ";
            }

        }

    }

    //cout << "Deletando Valores!" << endl;



    return 0;
}

void inserirValor(Elementos *&inicio, Elementos *&fim, int n)
{
    Elementos *novoElemento = new Elementos();

    novoElemento ->dados = n;
    novoElemento ->seguinte = NULL;

    if (isEmpty(inicio)) {
        inicio == novoElemento;
    } else {
        fim->seguinte = novoElemento;
    }

    fim = novoElemento;
    cout << "Valor " << n << " adicionado com sucesso!" << endl;
}

bool isEmpty(Elementos *inicio)
{
    return (inicio == NULL) ? true : false;
}

void deletarValor(Elementos *&inicio, Elementos *&fim, int n)
{
    n = inicio ->dados;

    Elementos *aux = inicio;

    if (inicio == NULL) {
        inicio = NULL;
        fim = NULL;

    } else {
        inicio = inicio ->seguinte;
    }
    delete aux;
}
