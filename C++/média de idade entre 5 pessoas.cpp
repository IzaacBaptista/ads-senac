//Fa�a um programa que imprima na tela a m�dia de idade entre 5 pessoas.
#include <iostream>
#include <iomanip>
using namespace std;
int i, idade, acumula;
float media;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA M�DIA DE IDADES   ";
	cout<<" \n =======================================  ";
	cout<<" \n\n Informe a de 5 pessoas  ";
	for (i=1;i<=5;i++)
	{
		cout<<"\n Informe a Idade da " <<i<<"a Pessoa: ";
		cin>>idade;
		acumula = acumula + idade;
	}
	media = acumula/5;
	cout<<"\n A media das idades � "<<media;
	cout<<"\n\n\n";
}
