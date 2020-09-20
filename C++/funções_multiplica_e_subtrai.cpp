#include <iostream>
using namespace std;
int subtrai, multiplica, num1, num2, num3;
void subtrair();
//protótipo da função
void multiplicar();
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	cout<<"\n Informe mais um número: ";
	cin>>num3;
	multiplicar();
	subtrair();
	cout<<"\n\n\n";
}
//área das funções
//função multiplicar
void multiplicar()
{
	multiplica = num1 * num2 * num3;
	cout<<"\n\n O valor da multiplicação é: "<< multiplica;
}
//função subtrair
void subtrair()
{
	subtrai = num1 - num2 - num3;
	cout<<"\n\n O valor da subtração é: "<< subtrai;
}



