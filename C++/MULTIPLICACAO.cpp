#include<iostream>//BIBLIOTECA PADR�O C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGAT�RIO
int num1, num2, mult;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADU��O E CARACTERES ESPECIAIS
	
	//\n SERVE PARA PULAR LINHA
	
	cout<<"\n\n PROGRAMA MULTIPLICA��O DOS N�MEROS ";//IMPRIME NA TELA
	cout<<"\n\n Informe o 1� n�mero: ";//IMPRIME NA TELA
	cin>>num1;
	cout<<"\n\n Informe o 2� n�mero: ";
	cin>>num2;
	mult = num1 * num2;
	cout<<"\n\n O resultado dos n�meros � :"<<mult;
	cout<<"\n\n\n";
}//FIM DO BLOCO
