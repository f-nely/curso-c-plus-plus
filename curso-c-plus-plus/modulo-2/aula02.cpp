#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char nome[] = "Leonardo";
    int tamanho = 0;

    tamanho = strlen(nome);

    cout << "O nome " << nome << " tem: " << tamanho << " letras" << "\n";

    return 0;
}
