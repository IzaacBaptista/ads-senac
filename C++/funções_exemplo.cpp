#include <iostream>
using namespace std;
int soma, num1, num2;
//prot�tipo da fun��o
void somar();
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Informe um n�mero: ";
	cin>>num1;
	cout<<"\n Informe outro n�mero: ";
	cin>>num2;
	somar();
	cout<<"\n\n\n";
}
//�rea das fun��es
//fun��o soma
void somar()
{
	soma = num1 + num2;
	cout<<"\n\n O valor da soma �: "<< soma;
}
