#include <iostream>
using namespace std;
int num1, num2;
//fun��o inline
int somar()
{
	return (num1 + num2);
}
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n Informe um n�mero: ";
	cin>>num1;
	cout<<"\n Informe outro n�mero: ";
	cin>>num2;
	cout<<"\n O resultado �: "<<somar();
	cout<<"\n\n\n";
}

