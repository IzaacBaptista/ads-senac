//Fa�a um programa que imprima na tela todos os n�meros de 0 a 100.
#include <iostream>
#include <iomanip>
using namespace std;
int i;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA N�MEROS DE 0 A 100   ";
	cout<<" \n =======================================  ";
	for (i=0;i<=100;i++)
	{
		cout<<i<<" - " ;;
	}
	cout<<"\n\n\n";
}
