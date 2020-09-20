#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
float arroz, batatas, refri, feijao, frango, dinheiro, soma, troco;
main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	cout<<"\n\n #####################";
	cout<<"\n\n   Lista de compras ";
	cout<<"\n\n ##################### ";
	cout<<"\n\n Quantos KG de Arroz?: ";
	cin>>arroz;
	cout<<"\n\n Quantos KG de Batatas?: ";
	cin>>batatas;
	cout<<"\n\n Quantas garrafas de Refri?: ";
	cin>>refri;
	cout<<"\n\n Quantos KG de feijao?: ";
	cin>>feijao;
	cout<<"\n\n Quantos KG de frango?: ";
	cin>>frango;
	soma = (arroz * 1.80 ) + (batatas * 2.50) + (refri * 2.60 ) + (feijao * 3.40 ) + ( frango * 5.90);
	cout<<"\n\n Valor total da compra :"<<soma;
	cout<<"\n\n Dinheiro? : ";
	cin>>dinheiro;
	troco = dinheiro - soma;
	cout<<"\n\n O troco que Ana receberá é de :"<<troco;
	cout<<"\n\n\n";
}//FIM DO BLOCO
