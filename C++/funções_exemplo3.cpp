#include <iostream>
using namespace std;
int num1, num2;
int somar();//protótipo da função
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	cout<<"\n O resultado é: "<<somar();
	cout<<"\n\n\n";
}
//áreã das funções
//função somar
int somar()
{
	int soma;
	soma = num1 + num2;
	return (soma);
}
