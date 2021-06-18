#include <iostream>

using namespace std;

void calculoQuadrado(int ver[], int);

void exibirDados(int vet[], int);

int main()
{
    const int tamanho = 5;
    int vet[tamanho] = {1, 2, 3, 4, 5};

    calculoQuadrado(vet, tamanho);
    exibirDados(vet, tamanho);

    return 0;
}

void calculoQuadrado(int vet[], int tam)
{
    for (int i = 0; i < tam; i ++) {

        vet[i] *= vet[i];

    }
}

void exibirDados(int vet[], int tam)
{
    for (int i = 0; i < tam; i++) {

        cout << vet[i] << endl;

    }
}
