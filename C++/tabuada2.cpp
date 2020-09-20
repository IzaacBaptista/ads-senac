#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
int num1, tabuada;
int main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	cout<<"\n\n Por favor, informe a tabuada que voce deseja:   ";
	cin>>num1;
	
	tabuada = num1;
	
	cout<<"\n\n " <<num1 <<  " x 0  = "<< tabuada * 0;
	cout<<"\n\n " <<num1 <<  " x 1  = "<< tabuada * 1;
	cout<<"\n\n " <<num1 <<  " x 2  = "<< tabuada * 2;
	cout<<"\n\n " <<num1 <<  " x 3  = "<< tabuada * 3;
	cout<<"\n\n " <<num1 <<  " x 4  = "<< tabuada * 4;
	cout<<"\n\n " <<num1 <<  " x 5  = "<< tabuada * 5;
	cout<<"\n\n " <<num1 <<  " x 6  = "<< tabuada * 6;
	cout<<"\n\n " <<num1 <<  " x 7  = "<< tabuada * 7;
	cout<<"\n\n " <<num1 <<  " x 8  = "<< tabuada * 8;
	cout<<"\n\n " <<num1 <<  " x 9  = "<< tabuada * 9;
	cout<<"\n\n " <<num1 <<  " x 10  = "<< tabuada * 10;
	
}
