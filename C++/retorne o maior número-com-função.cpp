//[3] –FUF que receba dois números e retorne o maior número.
#include <iostream>

using namespace std;

float num1, num2;
void num1maior();
void num2maior();
void iguais();

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Insira o primeiro número ";
	cin>>num1;
	cout<<"\n Insira o segundo número ";
	cin>>num2;
	if(num1 > num2){
		num1maior();
	} 
	if((num1 == num2) || (num2 == num1)){
		iguais();
	}
	else {
		num2maior();
	}
}

void num1maior() {
	cout<<"\n O número: " << num1 << " é maior que o número: "<<num2;
}

void num2maior() {
	cout<<"\n O número: " << num2 << " é maior que o número: "<<num1;
}

void iguais(){
	cout<<"\n Informe um número maior que o outro.";
}
