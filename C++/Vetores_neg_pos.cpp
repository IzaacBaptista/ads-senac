/*FUP que leia um vetor de 10 números, verifique quantos números
negativos há no vetor e quantos números positivos.
*/

#include<iostream>
using namespace std;
int const TAM = 5;
int i,vetor[TAM],positivo=0, negativo=0;
main()
{
  setlocale(LC_ALL, "Portuguese");
  cout<<"\n \tPrograma de Vetores: Positivos e Negativos";
  cout<<"\n\n Informe "<<TAM<< "  Números para o Vetor ";
  for(i=0;i<TAM;i++)
   {cout<<"\n\n Digite o " <<i+1<<"º Número:  ";
    cin>>vetor[i];
    if (vetor[i] >=0)
       positivo++;
    else
       negativo++;
    }// FIM DO FOR
  cout<<"\n\n A quantidade de Números Positivos no Vetor é:  "<<positivo;
  cout<<"\n\n A quantidade de Números Negativos no Vetor é:  "<<negativo;
  cout<<"\n\n\n";
} 
