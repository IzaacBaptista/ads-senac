//Fun��o com passagem de par�metros por valor
//N�o modifica o conte�do da vari�vel
#include <iostream>
using namespace std;
int multiplicar(int x, int y);
int num1=3, num2=4, resultado=0;
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n ANTES DE CHAMAR A FUN��O: ";
	cout<<"\n Num1 � = "<<num1;
	cout<<"\n Num2 � = "<<num2;
	resultado = multiplicar(num1, num2);
	cout<<"\n Resultado da multiplica��o: "<<resultado;
	cout<<"\n\n DEPOIS DE CHAMAR A FUN��O: ";
	cout<<"\n Num1 � = "<<num1;
	cout<<"\n Num2 � = "<<num2;
	cout<<"\n\n\n";
}

int multiplicar (int x, int y)
{
	//Modificando o X para 20
	x = 20;
	return x*y;
}
