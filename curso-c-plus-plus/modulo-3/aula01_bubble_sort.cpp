#include <iostream>
#include <string.h>

using namespace std;

void bubbleSort(int vet[]);

void imprimeVetor(int vet[]);

int main()
{
    int num[] = {5, 4, 2, 3, 1};

    bubbleSort(num);
    imprimeVetor(num);

    return 0;
}

void bubbleSort(int num[])
{
    int i, j, aux;

    for (i = 0; i < 5; i++) {

        for (j = 0; j < 4; j++) {

            if (num[j] > num[j+1]) {

                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;

            }
        }
    }
}

void imprimeVetor(int vet[])
{
    for (int i = 0; i < 5; i++) {

        cout << vet[i] << endl;
    }
}
