#include <iostream>

using namespace std;

void calculadora(int , int, int&, int&, int& , int&);

int main()
{
    int number1, number2, soma = 0, mul = 0, div = 0, sub = 0;

    cout << "Informe o number1: ", cin >> number1;
    cout << "Informe o number2: ", cin >> number2;

    calculadora(number1, number2, soma, mul, div, sub);

    cout << "Valor soma: " << soma << endl;
    cout << "Valor subtração: " << sub << endl;
    cout << "Valor multiplicação: " << mul << endl;
    cout << "Valor divisão: " << div << endl;

    return 0;
}

void calculadora(int num1, int num2, int& soma , int & mul, int& div, int &sub)
{
    soma = num1 + num2;
    mul = num1 * num2;
    if (num2 != 0) {
        div = num1 / num2;
    }
    sub = num1 - num2;
}
