//Faça um programa que receba dois números inteiros 
//e gere os números inteiros que estão no intervalo compreendido por eles.
#include <iostream>
#include <iomanip>
using namespace std;
int i, num1, num2, cont;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA INTERVALO ENTRE NÚMEROS INTEIROS   ";
	cout<<" \n =======================================  ";
	cout<<" \n INSIRA UM NÚMERO INTEIRO:  ";
	cin>>num1;
	cout<<" \n INSIRA OUTRO NÚMERO INTEIRO:  ";
	cin>>num2;
	for (i=num1;i<=num2;i++)
	{
		cout<<"\n"<<i--;
	}
	cout<<"\n\n\n";
}
