//2. FUP que leia um vetor referentes a idade de 10 pessoas, 
//calcule a média das idades das pessoas 
//e a quantidade de pessoas mais velhas do que a média das idades.
#include<iostream>
#include <iomanip> // PARA O setlocale
int const pessoas=10;
int num[pessoas],i, idade, media, acumula;
main()
{
	  using namespace std;
	  setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA MÉDIA DE IDADES   ";
	cout<<" \n =======================================  ";
	cout<<" \n\n Informe a idade de 5 pessoas  ";
	for (i=1;i<=pessoas;i++)
	{
		cout<<"\n Informe a Idade da " <<i<<"a Pessoa: ";
		cin>>idade;
		acumula = acumula + idade;
	}
	media = acumula/10;
	cout<<"\n A media das idades é "<<media;
	cout<<"\n\n\n";
		}
