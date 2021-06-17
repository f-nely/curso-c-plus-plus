#include <iostream>

using namespace std;

void selectionSort(int num[]);

void imprimeVetor(int num[]);

int main()
{
    int num[] = {5, 4, 2, 3, 1};

    selectionSort(num);

    imprimeVetor(num);

    return 0;
}

void selectionSort(int num[])
{
    int i, j, aux, numeroMinimo;

    for (i = 0; i < 5; i++) {

        numeroMinimo = i;

        for (j = i+1; j < 5; j++) {

            if (num[j] < num[numeroMinimo]) {

                numeroMinimo = j;

            }

        }

        aux = num[i];
        num[i] = num[numeroMinimo];
        num[numeroMinimo] = aux;
    }
}

void imprimeVetor(int num[])
{
    for (int i = 0; i < 5; i++) {

        cout << num[i] << endl;

    }
}
