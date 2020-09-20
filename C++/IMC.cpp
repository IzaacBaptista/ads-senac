#include<iostream>
#include<iomanip>

//2.O IMC –Índice de Massa Corporal é um critério da 
//Organização Mundial de Saúde para dar uma indicação sobre 
//a condição de peso de uma pessoa adulta. 
//A fórmula é IMC = peso / (altura)* 2  
//FUPque leia o peso e a altura de  um adulto 
//e mostre sua condição de acordocom a tabela do IMC abaixo. 
//Condição:          Mensagem:
//Abaixo de 18.5     Abaixo do peso 
//Entre 18.5 e 25    Peso normal
//Entre 25 e 30      Acima do peso
//Acima de 30        Obeso
using namespace std;
float peso, altura, imc;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Descubra seu IMC  ";
	cout<<"\n\n Insira sua altura: ";
	cin>>altura;
	cout<<"\n\n Insira o seu peso: ";
	cin>>peso;
	imc = (peso /(altura * 2));
	if (imc <= 18.5 ) {
		cout<<"\n\n Abaixo do peso";
	}
	
	if ((imc > 18.5 ) && (imc <= 25)){
		cout<<"\n\n Peso normal";
	}
	
	if ((imc > 25) && ( imc <= 30)) {
		cout<<"\n\n Acima do peso";
	}
	
	if ( imc > 30) {
		cout<<"Obeso";
	}
	 
	cout<<"\n\n Seu imc é : "<<imc;
	cout<<"\n\n\n";
}
