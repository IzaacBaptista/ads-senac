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
	cout<<"\n\n 6 números ------------------------- R$ 4,50";
	cout<<"\n\n 7 números ------------------------- R$ 31,50";
	cout<<"\n\n 8 números ------------------------- R$ 126,00";
	cout<<"\n\n 9 números ------------------------- R$ 378,00";
	cout<<"\n\n 10 números ------------------------ R$ 945,00";
	cout<<"\n\n 11 números ------------------------ R$ 2.079,00";
	cout<<"\n\n 12 números ------------------------ R$ 4.158,00";
	cout<<"\n\n 13 números ------------------------ R$ 7.722,00";
	cout<<"\n\n 14 números ------------------------ R$ 13.513,50";
	cout<<"\n\n 15 números ------------------------ R$ 22.522,50";
	
	cout<<"\n\n Quantos números você deseja apostar: ?\t";
	int qntd_num = 1;
	cin>>qntd_num;
	while((qntd_num >= 6 && qntd_num <=15)){
		cout<<"\n\n Você apostou: " <<qntd_num<< " números";
			//break;
			continue;
	}
	//if((qntd_num >= 6) && (qntd_num <= 15)){
	//	cout<<"\n\n Você apostou: " <<qntd_num<< " números";
	//}else {
	//	cout<<"\n\n Insira uma quantidade de números válidos";
	//}
	

}
