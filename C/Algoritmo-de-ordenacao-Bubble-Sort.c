/* Algoritmo de ordenação Bubble Sort */

#include <stdio.h>

  /* Definição da função bubble_sort */
  void bubble_sort (int vet[], int max) {      
    int flag, i, aux;   
    
    do {
      flag = 0;
      for (i = 0; i < (max - 1); i++) {
   
   /* Verfica se o vetor está em ordem, no caso ele coloca em ordem crescente, para decrescente trocar '>' por '<' */
   if (vet[i] > vet[i+1]) {
     /* Caso não esteja, ordena */
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
  
  /* Lê o total de números do vetor */
  scanf ("%d", &max);
  
  /* Define o vetor com o número max de algarismos */
  int vetor[max];
  
  for (i = 0; i < max; i++) {
    /* Lê cada indice do vetor */
    scanf ("%d",&vetor[i]);
  }
  
  /* Dentro dessa função o vetor será ordenado */
  bubble_sort (vetor, max); 
  
}
