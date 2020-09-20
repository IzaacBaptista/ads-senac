//Função com passagem de Vetor
#include <iostream>
using namespace std;
void altera_vetor (int vetor[]);
int i, vetor[10];
main()
{
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<10;i++)
		vetor[i] = i+10;
	cout<<"\n Valores do vetor: \n";
	for(i=0;i<10;i++)
	cout<<" - "<<vetor[i];
	
	altera_vetor(vetor);
	cout<<"\n\n Valores do vetor APÓS chamar a função:  \n";
	for(i=0;i<10;i++)
	cout<<" - "<<vetor[i];
	cout<<"\n\n\n";
}
void altera_vetor(int vetor[])
{
	for(i=0;i<10;i++)
	vetor[i] = i+100;
}
