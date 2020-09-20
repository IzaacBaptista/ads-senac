/*
Crie um programa que possua tr�s m�todos de
Ordena��o de Vetores, que:
� Tenha um vetor de 50 n�meros inteiros, criados
automaticamente;
� Escolha os 3 M�todos de Ordena��o;
� Para cada m�todo crie dois blocos de coment�rios: 
um para destacar as vantagens deste m�todo e outro coment�rio com as desvantagens.
� O usu�rio poder� escolher o m�todo de ordena��o.
� Entrega: 19/08/2020.
*/

#include <stdlib.h>
#include <stdio.h>
int main () {
      int x,n1,n2,soma,sub,mult;
      float div;
      printf ("######################################");
      printf ("PROGRAMA METODOS DE ORDENACAO");
      printf ("#######################################");
      printf ("ESCOLHA UM METODO PARA ORGANIZAR O VETOR DE 50 NUMEROS: ");
	  printf ("METODO INSERTION SORT ");
	  printf ("METODO SELECTION SORT ");
	  printf ("METODO BUBBLE SORT ");    
      scanf ("%d",&x);
      switch (x) {
        case 'a':
         		
         		/*M�todo de Ordena��o � Insertion Sort
         		Vantagens:
				� um bom m�todo quando se desejar adicionar poucos elementos em um arquivo j� ordenado, pois seu custo � linear.
				O algoritmo de ordena��o por inser��o � est�vel.
				� de simples implementa��o, leitura e manuten��o

				Desvantagens:				
				Alto custo de movimenta��o de elementos no vetor.
				 */
						
				int array[100], tamanho, ordem;
				   printf("\n\n\t Entre com o n�mero de termos...: ");
				   scanf("%d", &tamanho);
				   printf("\n\t Entre com os elementos do array...:");
				   for(int i = 0; i < tamanho;i++){
				      printf("\nDigite o %d� n�mero: ",i+1);
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
				
        break;
        case b:    
        	
        	/*M�todo de Ordena��o � Selection Sort
				Vantagem:
				Est�vel: n�o altera a ordem dos dados iguais.
				
				Desvantagens:
				Sua efici�ncia diminui drasticamente a medida que o n�mero de elementos no array aumenta.
				N�o � recomendado para aplica��es que que envolvam grandes quantidade de dados 
				ou que precisem de velocidade
			*/
        	
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
        break;
        case c:
        	
        	/*M�todo de Ordena��o � Bubble Sort
			
			Vantagens:
			Simplicidade do algoritmo. Est�vel 
			
			Desvantagens: 
			Lentid�o
			
			*/
        	
        	
        	
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
        break;
        default: 
         printf ("\n\nOpcao invalida"); }   }
         
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
			}
