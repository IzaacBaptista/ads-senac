#include<iostream>//BIBLIOTECA PADR�O C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGAT�RIO
float num1, num2, num3, soma, sub, mult, div;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADU��O E CARACTERES ESPECIAIS
	
	//\n SERVE PARA PULAR LINHA
	
	cout<<"\n\n PROGRAMA CALCULAR OS N�MEROS ";//IMPRIME NA TELA
	cout<<"\n\n Informe o 1� n�mero: ";//IMPRIME NA TELA
	cin>>num1;
	cout<<"\n\n Informe o 2� n�mero: ";
	cin>>num2;
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	cout<<"\n\n A soma dos n�meros � :"<<soma;
	cout<<"\n\n A subtra��o dos n�meros � :"<<sub;
	cout<<"\n\n A multiplica��o dos n�meros � :"<<mult;
	cout<<"\n\n A divis�o dos n�meros � :"<<div;
	cout<<"\n\n\n";
}//FIM DO BLOCO
