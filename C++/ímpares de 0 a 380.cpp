//Fa�a um programa que imprima na tela todos os n�meros �mpares de 0 a 380.
#include <iostream>
#include <iomanip>
using namespace std;
int i, cont;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA N�MEROS �MPARES DE 0 A 380   ";
	cout<<" \n =======================================  ";
	for (i=0;i<=380;i++)
	{
		if (i%2!=0){
		cont++;
	}}
	cout<<"\n Existem: "<< cont<< " n�meros �mpares entre 0 e 380";
	cout<<"\n\n\n";
}
