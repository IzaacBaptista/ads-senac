#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int k, j, aux, n=8, vetor[7];

int main()
{

	vetor[0] = 5;
	vetor[1] = 3; 
	vetor[2] = 2; 
	vetor[3] = 4; 
	vetor[4] = 7; 
	vetor[5] = 1; 
	vetor[6] = 0; 
	vetor[7] = 6;

	for (k = 1; k <= n - 1; k++){
	  printf("\n[%d] ", k);
	
	  aux = vetor[k];
	  j = k - 1;
	  while (j >= 0 && aux < vetor[j]) {
	     printf("%d, ", j);
	
	     vetor[j+1] = vetor[j];
	     j--;
	  }
	
	  vetor[j+1] = aux;
	}
	printf("\n");
	system("pause");
}

