#include <iostream>

using namespace std;

void insertSort(int num[]);

void vetorOrdemCrescente(int num[]);

void vetorOrdemDecrescente(int num[]);

int main()
{
    int num[] = {5, 4, 2, 3, 1};

    insertSort(num);

    vetorOrdemCrescente(num);

    cout << "\n";

    vetorOrdemDecrescente(num);

    return 0;
}

void insertSort(int num[])
{
    int i, posicao, aux;

    for (i = 0; i < 5; i++) {

        posicao = i;
        aux = num[i];

        while ((posicao > 0) && (num[posicao -1] > aux)) {

            num[posicao] = num[posicao-1];
            posicao--;
        }

        num[posicao] = aux;

    }
}

void vetorOrdemCrescente(int num[])
{
    cout << "Ordem crescente: " << endl;

    for (int i = 0; i < 5; i++) {

        cout << num[i] << endl;
    }
}

void vetorOrdemDecrescente(int num[])
{
    cout << "Ordem decrescente: " << endl;

    for (int i = 4; i >= 0; i--) {

        cout << num[i] << endl;

    }
}
