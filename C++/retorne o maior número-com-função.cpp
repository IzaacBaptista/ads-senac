//[3] �FUF que receba dois n�meros e retorne o maior n�mero.
#include <iostream>

using namespace std;

float num1, num2;
void num1maior();
void num2maior();
void iguais();

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Insira o primeiro n�mero ";
	cin>>num1;
	cout<<"\n Insira o segundo n�mero ";
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
	cout<<"\n O n�mero: " << num1 << " � maior que o n�mero: "<<num2;
}

void num2maior() {
	cout<<"\n O n�mero: " << num2 << " � maior que o n�mero: "<<num1;
}

void iguais(){
	cout<<"\n Informe um n�mero maior que o outro.";
}
