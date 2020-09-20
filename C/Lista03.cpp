// ************************************************************
//
//   Exemplo de  Estruturas Encadeadas
//
// ************************************************************
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
// define a estrutura do nodo
typedef struct Temp
  {
     int info;
     struct Temp *prox;
  }TNODO;
  // cria o inicio da lista
  TNODO *inicio=NULL;
//--------------------------------------------------------
// Funcao que define a lista como vazia.
void CriaLista()
{
   inicio = NULL;
}
//--------------------------------------------------------
// Funcao que insere um elemento do inicio da lista.
// Retorna:
//	0 - se nao ha'  memoria para inserir
//	1 - se conseguiu inserir
int Insere(int dado)
{
   TNODO *p;
   p =  (TNODO *) malloc(sizeof(TNODO));
   if (p==NULL)
   {
     printf("Erro de alocacao\n");
     return 0;
   }
   p->info = dado;
   p->prox = NULL;
   if (inicio==NULL)
      inicio = p;
   else {
	  p->prox = inicio;
	  inicio  = p;
	}
   return 1;
}
//--------------------------------------------------------
// Funcao que remove um elemento do inicio da lista.
// Retorna:
//	0 - se a lista ja'  estava vazia
//	1 - se conseguiu remover
int RemoveDoInicio()
{
  TNODO *ptr;
  if (inicio==NULL)
    return 0;
  else
  {
    ptr = inicio;
    inicio = inicio->prox;
    free(ptr);
    return 1;
  }
}
//--------------------------------------------------------
// Funcao que imprime toda a lista.
//
void Imprime()
{
  TNODO *ptr;
  if (inicio == NULL)
  {
    printf("--- fim da lista ---\n\n");
    return;
  }
  // Caso a lista nao esteja vazia
  ptr = inicio;
  while (ptr !=NULL) {
     printf("Info = %d\n",ptr->info);
     ptr = ptr->prox;
  }
  printf("--- fim da lista ---\n\n");
}
//--------------------------------------------------------
// Funcao que busca um elemento na lista.
// Retorna:
//	- NULL caso nao encontre
//	- ponteiro para o NODO onde esta' o dado, se conseguir encontrar
TNODO *BuscaDado(int dado)
{
  TNODO *ptr;
  if (inicio == NULL)
  {
    return NULL;  // Lista Vazia
  }
  // Caso a lista nao esteja vazia
  ptr = inicio;
  while (ptr !=NULL) {
     if (ptr->info == dado)  // achou !!
	return (ptr);        // retorna um ponteiro para
                             //o inicio da lista
     else ptr = ptr->prox;
  }
  return NULL;
}
//--------------------------------------------------------
// Funcao que remove um elemento especificado por 'dado'
// Retorna:
//	0 - se nao conseguiu achar
//	1 - se conseguiu remover
int RemoveDado(int dado)
{
  TNODO *ptr, *antes;
  if (inicio==NULL)
  {
      return 0;  // Lista vazia !!!
  }
  else
  {   // Caso a lista nao esteja vazia
      ptr = inicio;
      antes = inicio;
      while (ptr !=NULL)
      {
	 if (ptr->info == dado) // achou !!
	 {
	    if (ptr == inicio) // se esta removendo o primeiro da lista
	    {
	       inicio = inicio->prox;
	       free(ptr);
	       return 1; // removeu !!
	    }
	    else  // esta removendo do meio da lista
	    {
	      antes->prox = ptr->prox;  // Refaz o encadeamento
	      free(ptr);                // Libera a area do nodo
	      return 1;   // removeu !!
	    }
	 }
	 else  // continua procurando no prox. nodo
	 {
	    antes = ptr;
	    ptr = ptr->prox;
	 }
      }
      return 0; // Nao achou !!!
  }
}

//--------------------------------------------------
main()
{
   int i, ret;
   TNODO *aux;
   
   CriaLista();
   // Insere na lista os numeros 2, 4, 6, 8, 10, 12, 14, 16, 18 e 20
   for (i=1; i<=10;i++)
      Insere(i*2);
   Imprime();
   getch();
   // Busca dados de -2 a 25
   for (i=-2; i<=25;i++)
   {
      aux = BuscaDado(i);
      if (aux != NULL)
         printf("+++Achou o %d\n", aux->info);
      else printf("---Nao achou o %d\n", i);
   }
   getch();
   printf("Antes da remocao do primeiro nodo\n");
   Imprime();
   printf("Apos a remocao dos dois primeiros nodos\n");
   // Remove os dois primeiros nodos
   RemoveDoInicio();
   RemoveDoInicio();
   Imprime();
   getch();
   // Remove um elemento do meio da lista
   // Tenta remover -3, 0, 3, 6, 9, 12, 15, 18, 21
   printf("Remocao no meio da lista\n");
   for (i=-3; i<=21;i+=3)
   {
      ret = RemoveDado(i);
      if (ret == 1)
         printf("+++Removeu o %d\n",i);
      else printf("---Nao achou o %d\n", i);
   }
   printf("Apos a remocao\n");
   Imprime();
   getch();
   // Remove Toda a Lista
   ret = 1;
   while (ret == 1)
   {
      ret = RemoveDoInicio();
   }
   printf("Apos a remocao de todos os nodos\n");
   Imprime();
   getch();
}
