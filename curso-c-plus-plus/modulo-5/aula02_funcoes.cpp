#include <iostream>

using namespace std;

void novoValor(int&, int &);

int main()
{
    int num1, num2;

    cout << "Informe num1: ", cin >> num1;
    cout << "Informe num2: ", cin >> num2;

    novoValor(num1, num2);

    cout << "O novo valor de num1: " << num1 << endl;
    cout << "O novo valor de num2: " << num2 << endl;

    return 0;
}

void novoValor(int& num1, int & num2)
{
    cout << "O primeiro valor informado é: " << num1 << endl;
    cout << "O segundo valor é: " << num2 << endl;

    num1 = 32;
    num2 = 25;
}
