#include <iostream>
using namespace std;
int subtrai, multiplica, num1, num2, num3;
void subtrair();
//prot�tipo da fun��o
void multiplicar();
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Informe um n�mero: ";
	cin>>num1;
	cout<<"\n Informe outro n�mero: ";
	cin>>num2;
	cout<<"\n Informe mais um n�mero: ";
	cin>>num3;
	multiplicar();
	subtrair();
	cout<<"\n\n\n";
}
//�rea das fun��es
//fun��o multiplicar
void multiplicar()
{
	multiplica = num1 * num2 * num3;
	cout<<"\n\n O valor da multiplica��o �: "<< multiplica;
}
//fun��o subtrair
void subtrair()
{
	subtrai = num1 - num2 - num3;
	cout<<"\n\n O valor da subtra��o �: "<< subtrai;
}



