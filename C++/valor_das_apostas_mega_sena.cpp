#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"\n Veja os valores das apostas";
	cout<<"\n\n 6 n�meros ------------------------- R$ 4,50";
	cout<<"\n\n 7 n�meros ------------------------- R$ 31,50";
	cout<<"\n\n 8 n�meros ------------------------- R$ 126,00";
	cout<<"\n\n 9 n�meros ------------------------- R$ 378,00";
	cout<<"\n\n 10 n�meros ------------------------ R$ 945,00";
	cout<<"\n\n 11 n�meros ------------------------ R$ 2.079,00";
	cout<<"\n\n 12 n�meros ------------------------ R$ 4.158,00";
	cout<<"\n\n 13 n�meros ------------------------ R$ 7.722,00";
	cout<<"\n\n 14 n�meros ------------------------ R$ 13.513,50";
	cout<<"\n\n 15 n�meros ------------------------ R$ 22.522,50";
	
	cout<<"\n\n Quantos n�meros voc� deseja apostar: ?\t";
	int qntd_num = 1;
	cin>>qntd_num;
	while((qntd_num >= 6 && qntd_num <=15)){
		cout<<"\n\n Voc� apostou: " <<qntd_num<< " n�meros";
			//break;
			continue;
	}
	//if((qntd_num >= 6) && (qntd_num <= 15)){
	//	cout<<"\n\n Voc� apostou: " <<qntd_num<< " n�meros";
	//}else {
	//	cout<<"\n\n Insira uma quantidade de n�meros v�lidos";
	//}
	

}
