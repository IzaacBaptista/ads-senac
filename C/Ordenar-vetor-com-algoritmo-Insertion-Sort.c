/*Autor: Allen Konstanz 
 * Web: allenkonstanz.blogspot.com */
#include <stdio.h>

void insertionSortD(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] < array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}
void insertionSortC(int array[], int tamanho) {
      int i, j, tmp;
      for (i = 1; i < tamanho; i++) {
            j = i;
            while (j > 0 && array[j - 1] > array[j]) {
                  tmp = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = tmp;
                  j--;
            }
      }
}

int main(int argc, char** argv)
{
   int array[100], tamanho, ordem;
   printf("\n\n\t Entre com o número de termos...: ");
   scanf("%d", &tamanho);
   printf("\n\t Entre com os elementos do array...:");
   for(int i = 0; i < tamanho;i++){
      printf("\nDigite o %dº número: ",i+1);
      scanf("%d",&array[i]);
   }
   printf("\n\t Digite 1 para ordernar o array em ordem crescente ou 2 para ordem decrescente: ");
   scanf("%d",&ordem);
   if (ordem == 1){
      insertionSortC(array,tamanho);
      printf("\nArray em ordem crescente: ");
      for(int i=0; i<tamanho; i++){
      printf("\n\t\t\t%d", array[i]);
   }
      
      }else if (ordem ==2) {
   insertionSortD(array,tamanho);
   printf("\nArray em ordem decrescente: ");
   for(int i=0; i<tamanho; i++){
      printf("\n\t\t\t%d", array[i]);
   }
}
   return 0;
}
