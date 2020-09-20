	//
	//  EXEMPLO DE FILA
	//
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	#define MAX 4
	#define TRUE 1
	#define FALSE 0

	//definicao da fila !!
	struct produto{
	char nome[50];
	float valor;
	} *compras[MAX];

	//sentinelas da fila !!
	int inicio=0;
	int fim=0;

	//verifica se a fila estah vazia.
	int vazia()
	{
	  if (fim==inicio) {return TRUE;}
	  else {return FALSE;};
	}

	//retira o primeiro elemento da fila.
	void retire()
	{
	 struct produto *saida = (struct produto *) malloc(sizeof(struct produto));

	if (vazia()) {printf("\n*** O carrinho estah vazio!"); return;}
	else
	{
	  saida = compras[inicio];
	  inicio++;
	}
	  printf("\n*** Retirei o seguinte item do carrinho de compras:");
	  printf(" %s %.3f" ,saida->nome, saida->valor);
	  free(saida);
	}

	//lista os elementos da fila.
	void listAll()
	{
	 struct produto *item;
	 float total=0;
	 int quantidade = 0;
	 printf("\n\n\n*** Itens do Carrinho:");
	 for (int i = inicio; i < fim; i++)
	 { item = compras[i];
	   printf("\n%s \t %.3f", &item->nome, item->valor);
	   total += item->valor;
	   quantidade++;
	 }
	printf("\n\n*** Quantidade de itens: %i. Valor total das compras: R$ %.3f" ,quantidade,total);
	}

	void EntradaDeDados()
	{
	 struct produto *item = (struct produto *) malloc(sizeof(struct produto));
	 if (fim==MAX) {printf("\n*** O Carrinho estah cheio !"); return;}
	 else
	 {
	  printf("\n Nome do Produto =");
	  do {gets(item->nome);} while( (strlen(item->nome) < 1) == TRUE);

	  printf("\n Valor do produto:");scanf("%g",&item->valor);
	  printf("\n*** Produto Inserido!");
	  compras[fim]=item;
	  fim++;
	 }
	}

	// apresenta opcoes na tela do usuario.
	int menu()
	{
	 int o=-1; // !!!! letra o e não o numero 0
	 printf("\n\n");
	 for(int i = 0; i < 70; i++) printf("-");
	 printf("\n\nExemplo de Fila:");
	 printf("\n Simulacao de compra de produtos");
	 printf("\n Inicio = %i, Fim=%i",inicio,fim);
	 printf("\n Selecione a opcao:");
	 printf("\n\t 1-Inserir um elemento no carrinho.");
	 printf("\n\t 2-Retirar um elemento do carrinho.");
	 printf("\n\t 3-Listar produtos armazenados no carrinho.");
	 printf("\n\t 4-Encerrar o programa.");
	 printf("\n\t ?_");scanf("%u",&o);
	 return o; // !!!! letra o e não o numero 0
	}

	int main(void)
	{
	 int op = 0;
	 while(op != 4)
	 {
	  op=menu();
	  switch (op)
	  {
	    case 1:  EntradaDeDados();
	             break;
	    case 2:  retire();
	             break;
	    case 3:  listAll();
	             break;
	    case 4: exit(0);
	  }
	 }
	 return 0;	}

