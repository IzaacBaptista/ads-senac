//Função com passagem de parâmetros por valor
//Não modifica o conteúdo da variável
#include <iostream>
using namespace std;
int multiplicar(int x, int y);
int num1=3, num2=4, resultado=0;
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n ANTES DE CHAMAR A FUNÇÃO: ";
	cout<<"\n Num1 é = "<<num1;
	cout<<"\n Num2 é = "<<num2;
	resultado = multiplicar(num1, num2);
	cout<<"\n Resultado da multiplicação: "<<resultado;
	cout<<"\n\n DEPOIS DE CHAMAR A FUNÇÃO: ";
	cout<<"\n Num1 é = "<<num1;
	cout<<"\n Num2 é = "<<num2;
	cout<<"\n\n\n";
}

int multiplicar (int x, int y)
{
	//Modificando o X para 20
	x = 20;
	return x*y;
}
