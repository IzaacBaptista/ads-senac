#include <iostream>
using namespace std;
int result, num1, num2;
int somar();//prot�tipo da fun��o
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n Informe um n�mero: ";
	cin>>num1;
	cout<<"\n Informe outro n�mero: ";
	cin>>num2;
	result = somar();
	cout<<"\n O resultado �: "<<result;
	cout<<"\n\n\n";
}
//�rea das fun��es
//fun��o somar
int somar()
{
	int soma;
	soma = num1 + num2;
	return (soma);
}
