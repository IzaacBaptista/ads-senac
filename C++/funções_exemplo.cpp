#include <iostream>
using namespace std;
int soma, num1, num2;
//protótipo da função
void somar();
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	somar();
	cout<<"\n\n\n";
}
//área das funções
//função soma
void somar()
{
	soma = num1 + num2;
	cout<<"\n\n O valor da soma é: "<< soma;
}
