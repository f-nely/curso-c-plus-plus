
#include<iostream>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	/*int numero = 20;
	float numeroDecimal = 20.45;
	double numeroGrande = 20.1245;
	char letra = 'c';
	
	cout << "Inteiro " << numero << endl;
	cout << "Decimal " << numeroDecimal << endl;
	cout << "Double " << numeroGrande << endl;
	cout << "Char " << letra << endl;*/
	
	float numero;
	
	cout << "Informe um número: ";
	cin >> numero;
	
	cout << "O número informado é: " << numero;
	
	return 0;
}
