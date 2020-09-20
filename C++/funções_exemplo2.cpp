#include <iostream>
using namespace std;
int result, num1, num2;
int somar();//protótipo da função
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	result = somar();
	cout<<"\n O resultado é: "<<result;
	cout<<"\n\n\n";
}
//área das funções
//função somar
int somar()
{
	int soma;
	soma = num1 + num2;
	return (soma);
}
