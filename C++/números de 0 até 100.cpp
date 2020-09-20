//Listando números de 0 até 100
#include <iostream>
#include <iomanip>
using namespace std;
int i, cont;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n==================================";
	cout<<"\n\t PROGRAMA NÚMEROS DE 0 ATÉ 100  ";
	cout<<"\n==================================";
	i=0;
	do{
		cout<<" "<< i + 5;
		cont = i++;
	} while (cont <=200);
	cout<<"\n\n\n";
}
