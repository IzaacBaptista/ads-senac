//[3] �FUF que receba dois n�meros e retorne o maior n�mero.
#include <iostream>

using namespace std;

float num1, num2;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Insira o primeiro n�mero ";
	cin>>num1;
	cout<<"\n Insira o segundo n�mero ";
	cin>>num2;
	if(num1 > num2){
		cout<<"\n O n�mero: " << num1 << " � maior que o n�mero: "<<num2;
	} else {
		cout<<"\n O n�mero: " << num2 << " � maior que o n�mero: "<<num1;
	}
}
