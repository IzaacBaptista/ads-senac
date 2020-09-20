#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
int num1, num2, mult;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	//\n SERVE PARA PULAR LINHA
	
	cout<<"\n\n PROGRAMA MULTIPLICAÇÃO DOS NÚMEROS ";//IMPRIME NA TELA
	cout<<"\n\n Informe o 1° número: ";//IMPRIME NA TELA
	cin>>num1;
	cout<<"\n\n Informe o 2° número: ";
	cin>>num2;
	mult = num1 * num2;
	cout<<"\n\n O resultado dos números é :"<<mult;
	cout<<"\n\n\n";
}//FIM DO BLOCO
