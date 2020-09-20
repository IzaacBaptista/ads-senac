#include <stdio.h>
#include <stdlib.h>

void selecao(int vet[], int n){
	
	int menor, aux;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(vet[i]>vet[j])
			menor=j;
		}
		if(i!=menor){
			aux=vet[i];
			vet[i]=vet[menor];
			vet[menor]=aux;
		}
	}
}
int main() {
	
	int n=10;
	int vetor [n] = {3,6,5,1,2,8,7,9,4};
	
	selecao(vetor,n);
	
}
