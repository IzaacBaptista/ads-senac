//Fa�a um programa que receba dois n�meros inteiros 
//e gere os n�meros inteiros que est�o no intervalo compreendido por eles.
#include <iostream>
#include <iomanip>
using namespace std;
int i, num1, num2, cont;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA INTERVALO ENTRE N�MEROS INTEIROS   ";
	cout<<" \n =======================================  ";
	cout<<" \n INSIRA UM N�MERO INTEIRO:  ";
	cin>>num1;
	cout<<" \n INSIRA OUTRO N�MERO INTEIRO:  ";
	cin>>num2;
	for (i=num1;i<=num2;i++)
	{
		cout<<"\n"<<i--;
	}
	cout<<"\n\n\n";
}
