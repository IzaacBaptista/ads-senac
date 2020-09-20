//Faça um programa que imprima na tela todos os números de 0 a 1000.
#include <iostream>
#include <iomanip>
using namespace std;
int i;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA NÚMEROS DE 0 A 1000   ";
	cout<<" \n =======================================  ";
	for (i=0;i<=1000;i++)
	{
		cout<<i<<" - " ;;
	}
	cout<<"\n\n\n";
}
