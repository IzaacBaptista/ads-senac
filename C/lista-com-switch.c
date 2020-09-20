#include <stdio.h>
#include <stdlib.h>

main()
{
 setlocale(LC_ALL, "Portuguese"); // Fru-fru do idioma
 // Entrada dos Dados
 printf(" \n=========================================  "); 
 printf(" \n\t\a  PROGRAMA MOSTRANDO A LISTA COM O SWITCH  ");
 printf(" \n=========================================  "); 
 printf("\n Escolha uma Opção: ");
 printf("\n [a] - Verificar se a lista esta vazia");
 printf("\n [b] - Imprimir o tamanho da lista");
 printf("\n [c] - Criar uma lista com um elemento");
 printf("\n [d] - Adicionar 5 elementos a lista");
 printf("\n [e] - Imprimir os elementos na lista");
 printf("\n [f] - Verificar se a lista vazia");
 printf("\n [g] - Novo Tamanho da lista");
 printf("\n [h] - Verificar se o elemento 10 foi encontrado");
 printf("\n [i] - Verificar se o elemento 100 foi encontrado");
 printf("\n [j] - Remover o elemento 30");
 printf("\n [k] - Imprimir os elementos na lista atualizada");
 printf("\n [l] - Imprimir o tamanho da lista atualizada");
 printf("\n Sua escolha é ?: ";
 scanf(escolha);
 escolha = toupper (escolha); //transforma em maiúsculo
 switch (escolha)
 {
 	case 'A':{
 		       printf("Lista vazia!!\n\n");
		       break;
	         }
    case 'B':{
 		       printf("Tamanho da lista: %d\n\n", tamanho_lista());
		       break;
	         }
    case 'C':{
 		       printf("Criando uma lista...\n\n");
			   criar_lista(10);
		       break;
	         }
	case 'D':{
 		       printf("Adicionando elementos na lista...\n\n");
			   adicionar_lista(20);
			   adicionar_lista(30);
			   adicionar_lista(40);
			   adicionar_lista(50);
		       break;
	         }
	case 'E':{
 		       printf("Imprimindo os elementos da lista:\n");
			   imprimir_lista();
		       break;
	         }
	case 'F':{
 		       printf("\nA lista NAO esta vazia!!\n");
		       break;
	         }
	case 'G':{
 		       printf("\nTamanho da lista: %d\n", tamanho_lista());
		       break;
	         }
	case 'H':{
 		       printf("\nElemento 10 encontrado!\n");
		       break;
	         }
	case 'I':{
 		       printf("\nElemento 100 NAO encontrado.\n");
		       break;
	         }
	case 'J':{
 		       printf("\nElemento 30 removido com sucesso!\n");
		       break;
	         }
	case 'K':{
 		       printf("\nImprimindo os elementos da lista:\n");
			   imprimir_lista();
		       break;
	         }
	case 'L':{
 		       printf("\nTamanho da lista: %d\n", tamanho_lista());
		       break;
	         }         
	default : {
		        printf("\n  Escolha Inválida");
		break;
	}		 	         
 }
cout<<"\n\n\n";
 
}

