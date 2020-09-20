#include<iostream>
#include<iomanip>

//1.Tendo como dados de entrada a altura e  o sexo de uma pessoa, 
//FUP que calcule seu peso ideal, utilizando as seguintes fórmulas: 
//para homens: (72.7 * h) –58  
//para mulheres: (62.1 * h) –44.7

using namespace std;
float sexo, altura, result;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Calcule seu peso ideal  ";
	cout<<"\n\n Insira sua altura: ";
	cin>>altura;
	cout<<"\n\n Insira o seu sexo, usando: F para Feminino e M para masculino ";
	cin>>sexo;
	
	if (sexo == 'M') {
		result = (72.7 * altura) - 58;
	}
	
	if (sexo == 'F' ) {
	result = (62.1 * altura) - 44.7;
	}
	 
	cout<<"\n\n Seu peso ideal é : "<<result<< " KG ";
	cout<<"\n\n\n";
}
