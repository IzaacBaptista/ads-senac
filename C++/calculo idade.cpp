#include<iostream>//BIBLIOTECA PADR�O C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGAT�RIO
float ano_nasc, ano_atual, sua_idade;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADU��O E CARACTERES ESPECIAIS
	
	cout<<"\n\n Ano de nascimento  ";
	cout<<"\n\n Insira o ano que voc� nasceu ";
	cin>>ano_nasc;
	cout<<"\n\n Insira o ano atual: ";
	cin>>ano_atual;
	sua_idade = ano_atual - ano_nasc; 
	cout<<"\n\n Sua idade � : "<<sua_idade<< " Anos ";
	cout<<"\n\n\n";
}//FIM DO BLOCO
