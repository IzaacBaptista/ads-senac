#include<iostream>
#include<iomanip>

//3.Faça um  programa  que  leia  três  números inteiros.
//  Verifique  e  imprima:  o  maior  dos números.

using namespace std;
float number1, number2, number3;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Insira o primeiro Número: ";
	cin>>number1;
	cout<<"\n\n Insira o segundo Número: ";
	cin>>number2;
	cout<<"\n\n Insira o terceiro Número: ";
	cin>>number3;
	
	if ((number1 > number2) && ( number1 > number3)){
		cout<<"\n\n o maior número é: " <<number1;
	}
	
	if ((number2 > number1) && ( number2 > number3)){
		cout<<"\n\n o maior número é: " <<number2;
	}
	
	if ((number3 > number1) && ( number3 > number2)){
		cout<<"\n\n o maior número é: " <<number3;
	}
	 
	cout<<"\n\n\n";
}
