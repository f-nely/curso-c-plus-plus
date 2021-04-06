#include <iostream>

using namespace std;

int main() {
	
	int numero, i = 0;
	
	cout<<"Informe o numero: ";
	cin>>numero;
	
	while (i <= 10) {
		
		cout<<numero<<" x "<<i<<" = "<<numero*i<<endl;
		i++;
		
	}
}
