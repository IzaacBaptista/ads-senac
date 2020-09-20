//FUP que peça a altura de 5 pessoas. Calcule a média das alturas informadas.
#include <iostream>
#include <iomanip>
using namespace std;
int i, total;
float altura, media;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA MÉDIA DAS ALTURAS  ";
	cout<<" \n =======================================  ";
	cout<<" \n\n Informe a altura de 5 pessoas  ";
	for (i=1;i<=5;i++)
	{
		cout<<"\n Informe a Altura da " <<i<<"a Pessoa: ";
		cin>>altura;
		total = total + altura;
	}
	media = total/5;
	if(media <=1){
	cout<<"\n A media das alturas é de "<<media<<"m";
	} 
	else {
		cout<<"\n A media das alturas é de "<<media<<" metros";
	}
	cout<<"\n\n\n";
}
