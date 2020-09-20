//[3] –FUF que receba dois números e retorne o maior número.
#include <iostream>

using namespace std;

float num1, num2;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Insira o primeiro número ";
	cin>>num1;
	cout<<"\n Insira o segundo número ";
	cin>>num2;
	if(num1 > num2){
		cout<<"\n O número: " << num1 << " é maior que o número: "<<num2;
	} else {
		cout<<"\n O número: " << num2 << " é maior que o número: "<<num1;
	}
}
