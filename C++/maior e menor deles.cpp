#include<iostream>
#include<iomanip>

//4.Altere  o  programa  anterior  para  que :
//imprima  o  maior  e  o  menor  dos  tr�s  n�meros informados.

using namespace std;
float number1, number2, number3, numberUp, numberDown;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Insira o primeiro N�mero: ";
	cin>>number1;
	cout<<"\n\n Insira o segundo N�mero: ";
	cin>>number2;
	cout<<"\n\n Insira o terceiro N�mero: ";
	cin>>number3;
	
	if ((number1 > number2) && ( number1 > number3)){
		numberUp = number1;
	}
	if ((number1 < number2) && ( number1 < number3)){
		numberDown = number1;
	}
	
	if ((number2 > number1) && ( number2 > number3)){
		numberUp = number2;
	}
	if ((number2 < number1) && ( number2 < number3)){
		numberDown = number2;
	}
	
	if ((number3 > number1) && ( number3 > number2)){
		numberUp = number3;
	}
	if ((number3 < number1) && ( number3 < number2)){
		numberDown = number3;
	}
	
	cout<<"\n\n o maior n�mero �: " <<numberUp<< "\n\n e o menor n�mero � : " <<numberDown;	
	 
	cout<<"\n\n\n";
}
