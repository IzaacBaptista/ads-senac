#include<iostream>//BIBLIOTECA PADR�O C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGAT�RIO
int num1, dobro, triplo;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADU��O E CARACTERES ESPECIAIS
	
	cout<<"\n\n ******************************************** ";
	cout<<"\n\n Descobrindo o dobro e o triplo de um n�mero  ";
	cout<<"\n\n ******************************************** ";
	cout<<"\n\n Insira qualquer n�mero : ";
	cin>>num1;
	dobro = num1 * 2; 
	triplo = num1 * 3;
	cout<<"\n\n o dobro desse n�mero � : "<<dobro;
	cout<<"\n\n o triplo desse n�mero � : "<<triplo;
	cout<<"\n\n\n";
}//FIM DO BLOCO
