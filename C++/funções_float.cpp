#include <iostream>
using namespace std;
float soma, subtrai, multiplica, divide, num1, num2;
int somar, subtrair, dividir, multiplicar;
char op;
void sub();
void som();
void div();
void mult();
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	cout<<"\n Informe se voce quer somar(+), subtrair(-), multiplicar(*) ou dividir(/): ";
	cin>>op;
	if(op == '+'){
		som();
	}
	if(op == '-'){
		sub();
	}
	if(op == '/'){
		div();
	}
	if(op == '*'){
		mult();
	}
	cout<<"\n\n\n";
}
//área das funções
//função multiplicar
void mult()
{
	multiplica = num1 * num2;
	cout<<"\n\n O valor da multiplicação de "<< num1 << " x " << num2 << " é: "<< multiplica;
}
//função subtrair
void sub()
{
	subtrai = num1 - num2;
	cout<<"\n\n O valor da subtração de "<< num1 << " - " << num2 << " é: "<< subtrai;
}
//função somar
void som()
{
	soma = num1 + num2;
	cout<<"\n\n O valor da soma de "<< num1 << " + " << num2 << " é: "<< soma;
}
//funcão dividir
void div()
{
	divide = num1 / num2;
	cout<<"\n\n O valor da divisão de "<< num1 << " / " << num2 << " é: "<< divide;
}
