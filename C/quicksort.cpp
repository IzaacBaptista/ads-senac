#include <stdio.h>
#include <stdlib.h>



/* FUNÇÃO 2  */
int dividir(int vetor[],int esq, int dir){
    int aux; //troca de posicoes
    int cont = esq;

  	for(int i=esq+1 ; i<=dir ; i++){	

  	if( vetor[i] < vetor[esq] ){
    cont++;
    aux=vetor[i];
    vetor[i]=vetor[cont];
    vetor[cont]=aux;
   	 }
   	 }

    aux=vetor[esq];
    vetor[esq]=vetor[cont];
    vetor[cont]=aux;

    return cont;
}

/* FUNÇÃO 1 */
void quick(int vetor[],int esq, int dir){
    int pos;
    if(esq < dir){
        pos = dividir(vetor,esq,dir);
        quick(vetor,esq,pos-1);
        quick(vetor,pos+1,dir);
    }
}


/* MAIN */

int main(){

    int vetor[]={3,5,8,1,9,2,4,7,0,6};
    int n=10;

    printf("3,5,8,1,9,2,4,7,0,6");
        printf("\n");
    system("pause");    
    
     

    printf("\n\n\n");

    for(int i=0;i<n;i++)
        printf("%d - ",vetor[i]);

    printf("\n\n\n");

    system("pause");
    return 0;
}
