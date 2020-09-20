#include <stdio.h>

int main() {
	int vetor[15], aux;
	
	for (int i=0;i<15;i++){
		printf("Digite o numero %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	
	for (int x=0;x<15;x++){
		for(int y=x;y<15;y++){
			if(vetor[x]> vetor[y]){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
	
	for (int i=0;i<15;i++){
		printf("numero %d eh: %d ",i, vetor[i]);
	}
}
