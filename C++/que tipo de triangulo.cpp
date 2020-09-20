#include<iostream>
#include<iomanip>

//5.Leia tr�s lados referentes ao lado de um tri�ngulo (Lado A, Lado B e Lado C). 
//Verifique se esses lados podem ser os comprimentos dos lados de um tri�ngulo, 
//ap�s dever� ser informado qual o tipo de tri�ngulo (se � um tri�ngulo equil�tero, is�sceles ou escaleno).
//Como saber se os 3 lados informado formam um tri�ngulo? 
//R.: O comprimento de um lado do tri�ngulo � sempre menor do que a soma dos outros dois.
//Quais os tipos de tri�ngulos? Como saber qual tipo �?
//R.:Equil�tero > Todos lados iguais
//Is�sceles > Dois lados iguais
//Escaleno > Todos os lados diferentes

using namespace std;
float valor1, valor2, valor3, triangulo, equilatero, isosceles, escaleno;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n\n Insira o primeiro valor: ";
	cin>>valor1;
	cout<<"\n\n Insira o segundo valor: ";
	cin>>valor2;
	cout<<"\n\n Insira o terceiro valor: ";
	cin>>valor3;
	
	if ((valor1 < (valor2 + valor3)) || (valor2 < (valor1 + valor3)) || ((valor3 < valor1 + valor2))){
		//triangulo = 'triangulo';
		cout<<"\n\n  Os n�meros que voc� inseriu formam um triangulo";
	}
	if ((valor1 == valor2) && ( valor1 == valor3) && (valor2 == valor3)){
		cout<<"\n\n  Os n�meros que voc� inseriu formam um equilatero";
		//equilatero = 'equilatero';
	}
	
	if ((valor1 == valor2) || ( valor1 == valor3) || (valor2 == valor3)){
		cout<<"\n\n  Os n�meros que voc� inseriu formam um isosceles";
		//isosceles = 'isosceles';
	}
	if ((valor1 != valor2) && ( valor1 != valor3) && (valor2 != valor3)){
		cout<<"\n\n  Os n�meros que voc� inseriu formam um escaleno";
		//escaleno = 'escaleno';
	}
	
	cout<<"\n\n\n";
}
