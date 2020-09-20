#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
int num1, dobro, triplo;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	cout<<"\n\n ******************************************** ";
	cout<<"\n\n Descobrindo o dobro e o triplo de um número  ";
	cout<<"\n\n ******************************************** ";
	cout<<"\n\n Insira qualquer número : ";
	cin>>num1;
	dobro = num1 * 2; 
	triplo = num1 * 3;
	cout<<"\n\n o dobro desse número é : "<<dobro;
	cout<<"\n\n o triplo desse número é : "<<triplo;
	cout<<"\n\n\n";
}//FIM DO BLOCO
