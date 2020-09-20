#include<iostream>
#include<iomanip>
using namespace std;
int numero;
main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Par ou Ímpar? ";
	cout<<"\n\n Informe um Número qualquer \n\n";
	cin>>numero;
	if(numero%2==0)	{
		cout<< "É par" ;
	} else {
		cout<< "É impar";
	}
	
	
}
