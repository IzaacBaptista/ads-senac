#include <iostream>
#include <iomanip>
using namespace std;
int i, num;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA TABUADA COM FOR   ";
	cout<<" \n =======================================  ";
	cout<<" \n\n Informe um número:  ";
	cin>>num;
	for (i=0;i<=10;i++)
	{
		cout<<"\n "<<num<<" * "<<i<<" = "<<num * i;
	}
	cout<<"\n\n\n";
}
