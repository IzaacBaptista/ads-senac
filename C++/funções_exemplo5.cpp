#include <iostream>
using namespace std;
int num1, num2;
//função inline
int somar()
{
	return (num1 + num2);
}
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

