/* Exemplo Switch*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
using namespace std; // OBRIGATÓRIO
char escolha; 

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
 printf("\n [c] - Criar uma lista");
 printf("\n [d] - Adicionar elementos na lista");
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
 		       cout<<"\n  Mensagem de Boas Vindas";
 		       cout<<"\n  Oi";
		       break;
	         }
    case 'B':{
 		       cout<<"\n  Mensagem de Feliz Natal";
 		       cout<<"\n  Mas já????";
		       break;
	         }
     case 'C':{
 		       cout<<"\n  Mensagem de Feliz Páscoa";
 		       cout<<"\n  Coelhinho da Páscoa o que trazes pra mim?";
		       break;
	         }	
	default : {
		        cout<<"\n  Escolha Inválida";
		break;
	}		 	         
 }
cout<<"\n\n\n";
 
}

