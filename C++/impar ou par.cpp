#include<iostream>
#include<iomanip>
using namespace std;
int numero;
main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Par ou �mpar? ";
	cout<<"\n\n Informe um N�mero qualquer \n\n";
	cin>>numero;
	if(numero%2==0)	{
		cout<< "� par" ;
	} else {
		cout<< "� impar";
	}
	
	
}
