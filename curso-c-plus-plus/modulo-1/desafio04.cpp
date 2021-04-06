#include <iostream>

using namespace std;

int main() {
	
	int idade;
	
	cout<<"Informe a idade: ";
	cin>>idade;
	
	if (idade >= 18 && idade <= 25) {
		cout<<"Idade entre 18 e 25: ";
	} else {
		cout<<"Idade fora da faixa: ";
	}
	
}
