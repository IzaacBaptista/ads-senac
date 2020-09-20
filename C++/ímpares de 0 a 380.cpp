//Faça um programa que imprima na tela todos os números ímpares de 0 a 380.
#include <iostream>
#include <iomanip>
using namespace std;
int i, cont;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA NÚMEROS ÍMPARES DE 0 A 380   ";
	cout<<" \n =======================================  ";
	for (i=0;i<=380;i++)
	{
		if (i%2!=0){
		cont++;
	}}
	cout<<"\n Existem: "<< cont<< " números ímpares entre 0 e 380";
	cout<<"\n\n\n";
}
