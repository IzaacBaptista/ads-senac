#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
float ano_nasc, ano_atual, sua_idade;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	cout<<"\n\n Ano de nascimento  ";
	cout<<"\n\n Insira o ano que você nasceu ";
	cin>>ano_nasc;
	cout<<"\n\n Insira o ano atual: ";
	cin>>ano_atual;
	sua_idade = ano_atual - ano_nasc; 
	cout<<"\n\n Sua idade é : "<<sua_idade<< " Anos ";
	cout<<"\n\n\n";
}//FIM DO BLOCO
