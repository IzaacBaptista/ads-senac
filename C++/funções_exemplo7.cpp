#include <iostream>
using namespace std;
int somar(int x, int y);//prot�tipo da fun��o
main()
{
	int num1, num2;
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n Informe um n�mero: ";
	cin>>num1;
	cout<<"\n Informe outro n�mero: ";
	cin>>num2;
	cout<<"\n O resultado �: "<<somar(num1,num2);
	cout<<"\n\n\n";
}
//�rea das fun��es
//fun��o somar
int somar (int num1, int num2)
{
	return (num1 + num2);
}
