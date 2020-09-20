#include <iostream>
#include <iomanip>
using namespace std;
int idade, soma_acum=0, i=0;
float media;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n================================================= ";
	cout<<"\n\t PROGRAMA MÉDIA DAS IDADES COM WHILE";
	cout<<"\n=================================================  \n";
	while (i<3) {
		cout<<"Informe a idade "<<i + 1<<"\n";
		cin>>idade;
		soma_acum = soma_acum + idade;//acumulador
		i++;//i=i+1
	}
	media = soma_acum / 3;
	cout<<"A soma das idades é: "<<soma_acum<<"\n";
	cout<<"A medida das idades é: "<<media<<"\n";
	cout<<"\n\n\n";
}
