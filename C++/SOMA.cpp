#include<iostream>//BIBLIOTECA PADR�O C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGAT�RIO
int num1, num2,num3, soma;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADU��O E CARACTERES ESPECIAIS
	
	//\n SERVE PARA PULAR LINHA
	
	cout<<"\n\n PROGRAMA SOMA DOS N�MEROS ";//IMPRIME NA TELA
	cout<<"\n\n Informe o 1� n�mero: ";//IMPRIME NA TELA
	cin>>num1;
	cout<<"\n\n Informe o 2� n�mero: ";
	cin>>num2;
	cout<<"\n\n Informe o 3� n�mero: ";
	cin>>num3;
	soma = num1 + num2 + num3;
	cout<<"\n\n O resultado dos n�meros � :"<<soma;
	cout<<"\n\n\n";
}//FIM DO BLOCO
