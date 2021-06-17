#include <iostream>

using namespace std;

int main()
{
    int valor[] = {22, 1, 34, 4, 91};
    int i, procurarValor;
    char existe = 'F';

    i = 0;
    procurarValor = 4;

    while ((existe == 'F') && (i < 5)) {

        if (valor[i] == procurarValor) {

            existe = 'V';
            //break;
        }

        i++;

    }

        if (existe == 'F') {

            cout << "Valor não encontrado: " << endl;
        } else if (existe == 'V') {

            cout << "Valor encontrado: " << i - 1 << " posição" << endl;
        }

    return 0;
}
