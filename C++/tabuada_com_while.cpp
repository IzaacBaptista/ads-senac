//Tabuada com while
#include <iostream>
#include <iomanip>
using namespace std;
int i, num;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n==================================";
	cout<<"\n\t PROGRAMA TABUADA COM O WHILE   ";
	cout<<"\n==================================";
	cout<<"\n Informe um número para a tabuada \n";
	cin>>num;
	i=0;
	while(i<=10){
		cout<<num<<"*"<<i<<"="<<i*num<<"\n";
		i++;
	} 
	cout<<"\n\n\n";
}
