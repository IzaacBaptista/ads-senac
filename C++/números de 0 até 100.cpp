//Listando n�meros de 0 at� 100
#include <iostream>
#include <iomanip>
using namespace std;
int i, cont;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n==================================";
	cout<<"\n\t PROGRAMA N�MEROS DE 0 AT� 100  ";
	cout<<"\n==================================";
	i=0;
	do{
		cout<<" "<< i + 5;
		cont = i++;
	} while (cont <=200);
	cout<<"\n\n\n";
}
