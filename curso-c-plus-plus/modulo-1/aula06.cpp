#include <iostream>

using namespace std;

int main() {
	
	int numero;
	
	cout<<"Informe o numero: ";
	cin>>numero;
	
	for (int i = 0; i <= 10; i++) {
		cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
	}
}
