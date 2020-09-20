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
   cout<<"\n\n VETOR DE N�MEROS ALEAT�RIOS \n\n\n";  
  // inicializa o gerador de n�meros
  // rand�micos
   srand(time(NULL));
   cout<< "\n Qual o tamanho do vetor? Limite deve ser de 20 n�meros. ";
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
      // gera um n�mero aleat�rio entre 1 e 1000 (inclusive)
       vetor[i] =(rand()%1000)+1; // f�rmula m�gica
     }
}
//Imprime o vetor
void mostra_vetor (int vetor[], int TAM)
{
	for (i=0;i<TAM;i++)
       cout << "\n N�mero gerado: " << vetor[i];
}
