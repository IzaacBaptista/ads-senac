#include <iostream>
using namespace std;
int num1, num2;
int somar();//prot�tipo da fun��o
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
//�re� das fun��es
//fun��o somar
int somar()
{
	int soma;
	soma = num1 + num2;
	return (soma);
}
