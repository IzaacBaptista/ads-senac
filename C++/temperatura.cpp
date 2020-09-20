#include <stdio.h>
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
using namespace std; // OBRIGATÓRIO
float celsius, f;
int  c, escolha;
int main()
{
 setlocale(LC_ALL, "Portuguese"); // Fru-fru do idioma
 // Entrada dos Dados
 cout<<" \n=========================================  "; 
 cout<<"\n        CONVERTENDO TEMPERATURA             ";
 cout<<"\n=========================================  ";
 cout<<"\n Escolha uma Opção: ";
 cout<<"\n [1] Converter de Fahrenheit para Celsius";
 cout<<"\n [2] Converter de Celsius para Fahrenheit";
 cout<<"\n Digite um número correspondente a sua escolha: ";
 cin>>escolha;
	 switch (escolha) {
	 	
	 	case 1: {
	 			cout<<"\n Digite uma temperatura em Fahrenheit: ";
	 			cin>>f;
	 			f = celsius*(9.0/5.0)+32;
	 			cout<<"\n A temperatura solicitada em Fahrenheit é equivalente a " <<f<< " graus em Celsius";
			break;
		}
		
		case 2: {
	 			cout<<"\n Digite uma temperatura em Celsius: ";
	 			cin>>c;
	 			c = (c*9/5)+32;
	 			cout<<"\n A temperatura solicitada em Celsius é equivalente a " <<c<< " graus em Fahrenheit";
			break;
		}
	 }
 
}
