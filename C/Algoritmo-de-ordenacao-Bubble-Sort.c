/* Algoritmo de ordena��o Bubble Sort */

#include <stdio.h>

  /* Defini��o da fun��o bubble_sort */
  void bubble_sort (int vet[], int max) {      
    int flag, i, aux;   
    
    do {
      flag = 0;
      for (i = 0; i < (max - 1); i++) {
   
   /* Verfica se o vetor est� em ordem, no caso ele coloca em ordem crescente, para decrescente trocar '>' por '<' */
   if (vet[i] > vet[i+1]) {
     /* Caso n�o esteja, ordena */
     aux = vet[i];
     vet[i] = vet[i+1];
     vet[i+1] = aux;
     flag =1;
   }
      }
    /* Repete enquanto algum valor estiver fora de ordem */  
    } while (flag == 1);
    
    /* Imprime o vetor ordenado em ordem crescente */
    for (i = 0; i < max; i++) {
      printf ("%d ",vet[i]);
    }
    printf ("\n");
  }

int main () {
  int max, i;
  
  /* L� o total de n�meros do vetor */
  scanf ("%d", &max);
  
  /* Define o vetor com o n�mero max de algarismos */
  int vetor[max];
  
  for (i = 0; i < max; i++) {
    /* L� cada indice do vetor */
    scanf ("%d",&vetor[i]);
  }
  
  /* Dentro dessa fun��o o vetor ser� ordenado */
  bubble_sort (vetor, max); 
  
}
