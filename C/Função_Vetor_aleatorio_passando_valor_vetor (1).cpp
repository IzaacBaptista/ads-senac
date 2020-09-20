//********************************
//**** Program by CLAWER  ****
//********************************

#include <iostream>
#include<stdlib.h>
#include<time.h>
void gera_vetor (int vetor[], int TAM);
void mostra_vetor (int vetor[], int TAM);

int valor, vetor[20],i;
#define MAX 100 //quero gerar elementos entre 1 e 100 
int limite;
using namespace std;
 main()
{
   setlocale(LC_ALL, "Portuguese");
   system("color fc");
   cout<<"\n\n VETOR DE NÚMEROS ALEATÓRIOS \n\n\n";  
  // inicializa o gerador de números
  // randômicos
   srand(time(NULL));
   cout<< "\n Qual o tamanho do vetor? Limite deve ser de 20 números. ";
   cin>> limite;
   gera_vetor(vetor, limite);
   mostra_vetor (vetor, limite);
   cout<<"\n\n";
   system("PAUSE"); // pausa o programa
}


//Gera o vetor
void gera_vetor (int vetor[], int TAM)
{
	for(i=0; i<TAM;i++)
     { 
      // gera um número aleatório entre 1 e 1000 (inclusive)
       vetor[i] =(rand()%1000)+1; // fórmula mágica
     }
}
//Imprime o vetor
void mostra_vetor (int vetor[], int TAM)
{
	for (i=0;i<TAM;i++)
       cout << "\n Número gerado: " << vetor[i];
}
