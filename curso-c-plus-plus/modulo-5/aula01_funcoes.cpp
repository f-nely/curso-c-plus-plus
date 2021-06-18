#include <iostream>

using namespace std;

int sum(int num1, int num2);

int main()
{
    int n1, n2;

    cout << "Informe o valor de n1: ", cin >> n1;

    cout << "Informe o valor de n2: ", cin >> n2;

    cout << "A soma de " << n1 << " com " << n2 << " é " <<  sum(n1, n2) << endl;

    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
