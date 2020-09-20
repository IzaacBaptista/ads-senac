/**
* vetor= 3 1 5 2 4 
*	aux=
* troca= 1 2 3 4 5
**/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int vet[], int n)
{
	int i, j, aux;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(vet[j]>vet[j+1]) //vet[j] será comparado com o num da frente
			{
				aux=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=aux;
			}
		}
	}
}

int main (void)
{
	int i, n=5, vet[n]={3, 1, 5, 2, 4};
	

	
	for(i=0;i<n;i++)
		printf("vet[%d]=%d\n", i, vet[i]);
		
	bubbleSort(vet,n);
	
	printf("\n\n");
	
	for(i=0;i<n;i++)
		printf("vet[%d]=%d\n", i, vet[i]);
			
		return 0;
}
