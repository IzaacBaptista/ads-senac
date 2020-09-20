/*
Crie um programa que possua três métodos de
Ordenação de Vetores, que:
• Tenha um vetor de 50 números inteiros, criados
automaticamente;
• Escolha os 3 Métodos de Ordenação;
• Para cada método crie dois blocos de comentários: 
um para destacar as vantagens deste método e outro comentário com as desvantagens.
• O usuário poderá escolher o método de ordenação.
• Entrega: 19/08/2020.
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
         		
         		/*Método de Ordenação – Insertion Sort
         		Vantagens:
				É um bom método quando se desejar adicionar poucos elementos em um arquivo já ordenado, pois seu custo é linear.
				O algoritmo de ordenação por inserção é estável.
				é de simples implementação, leitura e manutenção

				Desvantagens:				
				Alto custo de movimentação de elementos no vetor.
				 */
						
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
				
        break;
        case b:    
        	
        	/*Método de Ordenação – Selection Sort
				Vantagem:
				Estável: não altera a ordem dos dados iguais.
				
				Desvantagens:
				Sua eficiência diminui drasticamente a medida que o número de elementos no array aumenta.
				Não é recomendado para aplicações que que envolvam grandes quantidade de dados 
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
        	
        	/*Método de Ordenação – Bubble Sort
			
			Vantagens:
			Simplicidade do algoritmo. Estável 
			
			Desvantagens: 
			Lentidão
			
			*/
        	
        	
        	
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
