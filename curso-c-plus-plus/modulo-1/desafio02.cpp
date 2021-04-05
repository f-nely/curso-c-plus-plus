#include <iostream>

using namespace std;

int main() {
	int n1, n2, soma, subtracao, divisao, multiplicacao;
 
	cout<<"Informe o n1: ";
	cin>>n1;
		
	cout<<"Informe o n2: ";
	cin>>n2;
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	multiplicacao = n1 * n2;
	
	if (n2 > 0) {
		divisao = n1 / n2;
	} 
	
	cout<<"A soma e: "<<soma<<endl;
	cout<<"A subtracao e: "<<subtracao<<endl;
	cout<<"A divisao e: "<<divisao<<endl;
	cout<<"A multiplicacao e: "<<multiplicacao<<endl;
		
	
	return 0;
}
