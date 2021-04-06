#include <iostream>

using namespace std;

int main() {

	int numero, fatorial = 1;
	
	cout<<"Informe o numero: ";
	cin>>numero;
	
	for (int i = numero; i > 0; i--) {
		
		fatorial *= i;
		
	}
	cout<<fatorial;
	
}
