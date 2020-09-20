#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <windows.h>

#define TAM 10
double PCFreq = 0.0;
__int64 CounterStart = 0;


int dividir(int vet[], int esq, int dir);
void quickSort(int vet[], int esq, int dir);
void StartCounter();
double GetCounter();


int main() {
	
	setlocale(LC_ALL,"portuguese");
	FILE *b;
	FILE *ins;
	FILE *sel;
	FILE *qS;
	int vet[TAM];
	int i = 0, j = 0, aux = 0, menor = 0;
	double tempoMilli = 0.0000000;
	
	for(i = 0; i < TAM; i++)
	{
		vet[i] = rand() % 10;
	}

	for(i = 0; i < TAM; i++)
	{	
		printf("Valor  %i : %i" , i+1,  vet[i]);
    	printf("\n");
	}
	
	
	//Bolha
	
	b=fopen("c:\\Arquivos\\temp.txt","w");
	StartCounter();
	for( i = 0; i < TAM; i++ )
  	{
    	for( j = i + 1; j < TAM; j++ ) 
    	{
      		
      		if ( vet[i] > vet[j] )
      		{
         		aux = vet[i];
         		vet[i] = vet[j];
         		vet[j] = aux;
      		}
    	}
    
  	} 
	
	tempoMilli = GetCounter();
	
	fprintf(b,"%f",tempoMilli);
	fclose(b);
	
	printf("\n=============== MÉTODOS DE ORDENAÇÃO ==============\n");
	
	printf("\n Bubble Sort Crescente!! \n");
  
  	for( i = 0; i < TAM; i++ )
  	{
   		printf("\n vetor[%d] = %d",i,vet[i]); 
   		 
   		printf("\n");
  	}  
  	
  	printf("\nTempo : %f\n", tempoMilli);
  	
	//insert sort
	
	ins = fopen("c:\\Arquivos\\tempI.txt","w");
	
	StartCounter();
	for(i = 1; i < TAM; i++)
	{
		aux = vet[i];
		
		for(j = i; (j > 0) && (aux > vet[j - 1]); j--)
		{
			vet[j] = vet[j - 1];
		}
		vet[j] = aux;
	}
	
	tempoMilli = GetCounter();
	
	fprintf(ins,"%f",tempoMilli);
	fclose(ins);
	
	printf("\n Insertion Sort Decrescente!! \n");
	
	for( i = 0; i < TAM; i++ )
  	{
   		printf("\n vetor[%d] = %d",i,vet[i]); 
   		 
   		printf("\n");
  	}  
  	
  	printf("\nTempo : %f\n", tempoMilli);
  	
  	//SelectionSort
  	
  	sel = fopen("c:\\Arquivos\\tempS.txt","w");
  	
  	StartCounter();
  	for(i = 0; i < TAM; i++)
  	{
  		for(j = i+1; j < TAM; j++ )
  		{
  			if(vet[i] > vet[j])
  			{
  				menor = j;
  				
			}
			
			if(i != menor)
			{
				aux = vet[i];
				vet[i] = vet[menor];
				vet[menor] = aux;
			}
  				
		}
  			
	}
  	
  	tempoMilli = GetCounter();
  	
  	fprintf(sel,"%f",tempoMilli);
	fclose(sel);
  	
  	printf("\nSelection Sort Crescente!!\n");
  	
  	
  	for( i = 0; i < TAM; i++ )
  	{
   		printf("\n vetor[%d] = %d",i,vet[i]); 
   		 
   		printf("\n");
  	}
	
	printf("\nTempo : %f\n", tempoMilli);
	
	//Quick Sort
	
	printf("\nQuick Sort Crescente!!\n");
	
	qS = fopen("c:\\Arquivos\\tempQs.txt","w");
	
	StartCounter();
	
	quick(vet, 0, TAM);
	
	tempoMilli = GetCounter();
	
	fprintf(qS,"%f",tempoMilli);
	fclose(qS);
	
	for( i = 0; i < TAM; i++ )
  	{
   		printf("\n vetor[%d] = %d",i,vet[i]); 
   		 
   		printf("\n");
  	}
	
	printf("\nTempo : %f\n", tempoMilli);
	return 0;
}

int dividir(int vet[], int esq, int dir)
{
	int aux, i;
	int cont = esq;
	
	for(i = esq+1; i <= dir; i++)
	{
		if(vet[i] < vet[esq])
		{
			cont++;
			
			aux = vet[i];
			vet[i] = vet[cont];
			vet[cont] = aux;
		}
	}
	
	aux = vet[esq];
	vet[esq] = vet[cont];
	vet[cont] = aux;
	
	return cont;
}

void quick(int vet[], int esq, int dir)
{
	int pos;
	
	if(esq < dir)
	{
		pos = dividir(vet, esq, dir);
		quick(vet, esq, pos-1);
		quick(vet, pos+1, dir);
	}
	
	
}


void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
        printf("QueryPerformanceFrequency Failed.\n");
    PCFreq = (double)(li.QuadPart) / 1000.0;
    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (double)(li.QuadPart - CounterStart) / PCFreq;
}


