#include <iostream>
using namespace std;
int somar(int x, int y);//protótipo da função
main()
{
	int num1, num2;
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n Informe um número: ";
	cin>>num1;
	cout<<"\n Informe outro número: ";
	cin>>num2;
	cout<<"\n O resultado é: "<<somar(num1,num2);
	cout<<"\n\n\n";
}
//área das funções
//função somar
int somar (int num1, int num2)
{
	return (num1 + num2);
}
