#include<iostream>
#include<iomanip>

//3.Fa�a um  programa  que  leia  tr�s  n�meros inteiros.
//  Verifique  e  imprima:  o  maior  dos n�meros.

using namespace std;
float number1, number2, number3;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Insira o primeiro N�mero: ";
	cin>>number1;
	cout<<"\n\n Insira o segundo N�mero: ";
	cin>>number2;
	cout<<"\n\n Insira o terceiro N�mero: ";
	cin>>number3;
	
	if ((number1 > number2) && ( number1 > number3)){
		cout<<"\n\n o maior n�mero �: " <<number1;
	}
	
	if ((number2 > number1) && ( number2 > number3)){
		cout<<"\n\n o maior n�mero �: " <<number2;
	}
	
	if ((number3 > number1) && ( number3 > number2)){
		cout<<"\n\n o maior n�mero �: " <<number3;
	}
	 
	cout<<"\n\n\n";
}
