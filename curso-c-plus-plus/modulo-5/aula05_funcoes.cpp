#include <iostream>

using namespace std;

void exibirValores(int matriz[][3], int, int);

void calcularValores(int matriz[][3], int, int);

int main()
{
    const int numeroLinhas = 2;
    const int numeroColunas = 3;

    int matriz[numeroLinhas][numeroColunas] = {1, 2, 3, 4, 5, 6};

    cout << "\nExibindo Matriz" << "\n";

    exibirValores(matriz, numeroLinhas, numeroColunas);

    calcularValores(matriz, numeroLinhas, numeroColunas);

    cout << "Operação para elevar os valores ao quadrado" << "\n";

    exibirValores(matriz, numeroLinhas, numeroColunas);

    return 0;
}

void exibirValores(int matriz[][3], int numeroLinhas, int numeroColunas)
{
    for (int i = 0; i < numeroLinhas; i++) {

        for (int j = 0; j < numeroColunas; j++) {

            cout << matriz[i][j] << "   ";
        }
        cout << "\n";
    }
}

void calcularValores(int matriz[][3], int numeroLinhas, int numeroColunas)
{

    for (int i = 0; i < numeroLinhas; i++) {

        for (int j = 0; j < numeroColunas; j++) {

            matriz[i][j] *= matriz[i][j];
        }
        cout << "\n";
    }
}

