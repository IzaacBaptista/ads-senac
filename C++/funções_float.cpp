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
	
	cout<<"\n Informe um n�mero: ";
	cin>>num1;
	cout<<"\n Informe outro n�mero: ";
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
//�rea das fun��es
//fun��o multiplicar
void mult()
{
	multiplica = num1 * num2;
	cout<<"\n\n O valor da multiplica��o de "<< num1 << " x " << num2 << " �: "<< multiplica;
}
//fun��o subtrair
void sub()
{
	subtrai = num1 - num2;
	cout<<"\n\n O valor da subtra��o de "<< num1 << " - " << num2 << " �: "<< subtrai;
}
//fun��o somar
void som()
{
	soma = num1 + num2;
	cout<<"\n\n O valor da soma de "<< num1 << " + " << num2 << " �: "<< soma;
}
//func�o dividir
void div()
{
	divide = num1 / num2;
	cout<<"\n\n O valor da divis�o de "<< num1 << " / " << num2 << " �: "<< divide;
}
