#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
float num1, num2, num3, soma, sub, mult, div;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	//\n SERVE PARA PULAR LINHA
	
	cout<<"\n\n PROGRAMA CALCULAR OS NÚMEROS ";//IMPRIME NA TELA
	cout<<"\n\n Informe o 1° número: ";//IMPRIME NA TELA
	cin>>num1;
	cout<<"\n\n Informe o 2° número: ";
	cin>>num2;
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;
	div = num1 / num2;
	cout<<"\n\n A soma dos números é :"<<soma;
	cout<<"\n\n A subtração dos números é :"<<sub;
	cout<<"\n\n A multiplicação dos números é :"<<mult;
	cout<<"\n\n A divisão dos números é :"<<div;
	cout<<"\n\n\n";
}//FIM DO BLOCO
