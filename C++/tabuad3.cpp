#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
int num1, tabuada;
int main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	cout<<"\n\n Por favor, informe a tabuada que voce deseja:   ";
	cin>>num1;
	
	tabuada = num1 * 0;
	
	cout<<"\n\n " <<num1 <<  " x 0  = "<< tabuada * 0;
	tabuada = num1 * 1;
	cout<<"\n\n " <<num1 <<  " x 1  = "<< tabuada;
	tabuada = num1 * 2;
	cout<<"\n\n " <<num1 <<  " x 2  = "<< tabuada;
	tabuada = num1 * 3;
	cout<<"\n\n " <<num1 <<  " x 3  = "<< tabuada;
	tabuada = num1 * 4;
	cout<<"\n\n " <<num1 <<  " x 4  = "<< tabuada;
	tabuada = num1 * 5;
	cout<<"\n\n " <<num1 <<  " x 5  = "<< tabuada;
	tabuada = num1 * 6;
	cout<<"\n\n " <<num1 <<  " x 6  = "<< tabuada;
	tabuada = num1 * 7;
	cout<<"\n\n " <<num1 <<  " x 7  = "<< tabuada;
	tabuada = num1 * 8;
	cout<<"\n\n " <<num1 <<  " x 8  = "<< tabuada;
	tabuada = num1 * 9;
	cout<<"\n\n " <<num1 <<  " x 9  = "<< tabuada;
	tabuada = num1 * 10;
	cout<<"\n\n " <<num1 <<  " x 10  = "<< tabuada;
	
}
