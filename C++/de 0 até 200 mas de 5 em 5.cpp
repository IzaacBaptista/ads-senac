//Faça um programa que imprima todos os números de 0 até 200
//mas pulando de 5 em 5. Utilize o comando WHILE
#include <iostream>
#include <iomanip>
using namespace std;
int i=0, cont;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n================================================= ";
	cout<<"\n\t PROGRAMA INDO DE 0 A 200 DE 5 EM 5 ";
	cout<<"\n=================================================  \n";
	while(i*5<200){

		i++;
    	cout<<i*5;
    	cout << "\n";
		}	
	cout<<"\n\n\n";
}
