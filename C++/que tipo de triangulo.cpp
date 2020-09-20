#include<iostream>
#include<iomanip>

//5.Leia três lados referentes ao lado de um triângulo (Lado A, Lado B e Lado C). 
//Verifique se esses lados podem ser os comprimentos dos lados de um triângulo, 
//após deverá ser informado qual o tipo de triângulo (se é um triângulo equilátero, isósceles ou escaleno).
//Como saber se os 3 lados informado formam um triângulo? 
//R.: O comprimento de um lado do triângulo é sempre menor do que a soma dos outros dois.
//Quais os tipos de triângulos? Como saber qual tipo é?
//R.:Equilátero > Todos lados iguais
//Isósceles > Dois lados iguais
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
		cout<<"\n\n  Os números que você inseriu formam um triangulo";
	}
	if ((valor1 == valor2) && ( valor1 == valor3) && (valor2 == valor3)){
		cout<<"\n\n  Os números que você inseriu formam um equilatero";
		//equilatero = 'equilatero';
	}
	
	if ((valor1 == valor2) || ( valor1 == valor3) || (valor2 == valor3)){
		cout<<"\n\n  Os números que você inseriu formam um isosceles";
		//isosceles = 'isosceles';
	}
	if ((valor1 != valor2) && ( valor1 != valor3) && (valor2 != valor3)){
		cout<<"\n\n  Os números que você inseriu formam um escaleno";
		//escaleno = 'escaleno';
	}
	
	cout<<"\n\n\n";
}
