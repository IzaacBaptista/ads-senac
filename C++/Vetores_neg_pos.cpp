/*FUP que leia um vetor de 10 n�meros, verifique quantos n�meros
negativos h� no vetor e quantos n�meros positivos.
*/

#include<iostream>
using namespace std;
int const TAM = 5;
int i,vetor[TAM],positivo=0, negativo=0;
main()
{
  setlocale(LC_ALL, "Portuguese");
  cout<<"\n \tPrograma de Vetores: Positivos e Negativos";
  cout<<"\n\n Informe "<<TAM<< "  N�meros para o Vetor ";
  for(i=0;i<TAM;i++)
   {cout<<"\n\n Digite o " <<i+1<<"� N�mero:  ";
    cin>>vetor[i];
    if (vetor[i] >=0)
       positivo++;
    else
       negativo++;
    }// FIM DO FOR
  cout<<"\n\n A quantidade de N�meros Positivos no Vetor �:  "<<positivo;
  cout<<"\n\n A quantidade de N�meros Negativos no Vetor �:  "<<negativo;
  cout<<"\n\n\n";
} 
