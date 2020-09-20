//Função com passagem de Vetor
#include <iostream>
#include "izaac.h"
using namespace std;
void altera_vetor (int vetor[]);
int i, vetor[10];
main()
{
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<100;i++)
		vetor[i] = i+99;

	
	altera_vetor(vetor);
	cout<<"\n\n 100 valores aleatórios no vetor \n\n";
	for(i=0;i<100;i++)
	cout<<" - "<<vetor[i];
	cout<<"\n\n\n";
}

