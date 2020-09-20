#include<iostream>
#include<iomanip>
using namespace std;
int idade;
char sexo;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Maior de idade ou não? ";
	cout<<"\n\n Quantos anos seu filho (a) tem? ";
	cin>>idade;
	cout<<"\n\n Qual o sexo do seu filho (a)? Digite F para feminino e M para masculino ";
	cin>>sexo;
	
	//if (sexo == 'F') {
	//	sexo = 'Feminino';
	//}
	//else {sexo = 'Masculino';
	//}
		
	if ((idade >= 18) && (sexo == 'M'))	{
		M = 'Masculino';
		cout<< " Com " <<idade<< " anos já pode sair" ;
	} 
	if ((idade >= 35) && (sexo == 'F')) {
		F = 'Feminino';
		cout<< " Com " <<idade<< " anos já pode sair" ;
	}
	else {
		cout<< " Com " <<idade<< " anos, sendo do sexo " <<sexo<< " não pode sair" ;
	}
	
}
