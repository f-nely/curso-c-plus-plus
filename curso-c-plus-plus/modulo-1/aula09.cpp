#include <iostream>

using namespace std;

int main() {
	
	int num[] = {2, 7, 3, 5, 1};
	int soma = 0, qtElementos;
	
	qtElementos = sizeof(num) / sizeof(int);
	
	for (int i = 0; i < qtElementos; i++) {
		
		soma += num[i];
	}
	cout<<soma<<endl;
	/*cout<<sizeof(num) / sizeof(int);*/
}
