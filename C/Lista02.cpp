/*
	
	Programação em C - Lista encadeada (linked list)
	Funcionalidades:
		1) - Criar lista
		2) - Adicionar na lista
		3) - Listar os elementos da lista
		4) - Verificar se a lista está vazia
		5) - Buscar elemento na lista
		6) - Remover elemento da lista
		7) - Verificar o tamanho da lista
*/
#include <ctype.h> // para usar o toupper
#include <stdio.h>
#include <stdlib.h>

// struct "exemplo" possui dois campos
typedef struct exemplo
{
	int v; // inteiro "v"
	struct exemplo *prox; // ponteiro para o próximo elemento
} t_exemplo;


// variáveis ponteiros globais que guardam referência
// para a cabeça da lista e para o nó corrente
// cabeca da lista encadeada (começa com NULL)
t_exemplo *cabeca = NULL;
t_exemplo *corrente = NULL;


// função para criar uma lista
// recebe um valor inteiro e retorna um ponteiro do tipo t_exemplo
t_exemplo * criar_lista(int valor)
{
	// aloca espaço em memória
	t_exemplo * p = (t_exemplo*)malloc(sizeof(t_exemplo));

	// verifica se houve falha na alocação de memória
	if(p == NULL)
	{
		printf("\nFalha ao alocar memoria\n");
		return NULL;
	}

	// se chegou aqui é porque foi feita a alocação com sucesso
	p->v = valor; // atribui o valor passado
	p->prox = NULL; // o próximo é NULL

	// faz a cabeca e o corrente apontar para p
	cabeca = corrente = p;
	// retorna o ponteiro alocado
	return p;
}


// função que adiciona um elemento à lista
// recebe a cabeca e o elemento a ser adicionado
// o elemento é inserido no FINAL da lista
t_exemplo* adicionar_lista(int v)
{
	// verifica se a cabeca é NULL (lista vazia), se for NULL,
	// então retorna o retorno da função criar_lista
	if(cabeca == NULL)
	{
		return criar_lista(v);
	}

	// se chegou aqui é porque a lista NÃO é vazia
	// aloca espaço em memória
	t_exemplo * p = (t_exemplo*)malloc(sizeof(t_exemplo));

	// verifica se houve falha na alocação de memória
	if(p == NULL)
	{
		printf("\nFalha ao alocar memoria\n");
		return NULL;
	}

	// atribui valores
	p->v = v;
	p->prox = NULL;

	// insere no FINAL da lista (obs.: também poderia ser no início)
	// aqui será feita a inserção no final,
	// a inserção no início fica como um desafio ;-)
	// para inserção no final, fazemos com que o próximo do nó
	// corrente aponte para o "p"
	corrente->prox = p;
	// o corrente passar a ser o "p"
	corrente = p;

	// retorna o ponteiro alocado
	return p;
}


// função que imprime a lista
void imprimir_lista()
{
	// variável ponteiro "aux" para percorrer a lista
	// inicialmente aponta para a "cabeca"
	t_exemplo *aux = cabeca;

	// enquanto "aux" for diferente de NULL
	while(aux != NULL)
	{
		// imprime o valor
		printf("%d\n", aux->v);
		// aponta para o próximo elemento da lista
		aux = aux->prox;
	}
}


// função para verificar se a lista está vazia
// retorna 1 se estiver vazia e 0 caso contrário
int lista_vazia()
{
	// se cabeca for NULL, então a lista está vazia
	if(cabeca == NULL)
		return 1;
	return 0;
}


// função para buscar um elemento na lista
// essa função recebe o valor a ser buscado e um ponteiro para ponteiro "ant"
// o "ant" servirá para guardarmos o anterior do elemento encontrado, pois
// iremos utilizar na remoção, assim fica mais otimizado para não ter que
// percorrer a lista novamente pois precisa-se do elemento anterior ao elemento
// que irá ser removido para ajustar corretamente a lista
// retorna o ponteiro para o elemento encontrado ou NULL se não encontrar
t_exemplo * buscar_elemento(int v, t_exemplo **ant)
{
	// se a lista estiver vazia, então não possui elementos,
	// portanto, retorna 0 indicando que NÃO achou.
	if(lista_vazia() == 1)
		return NULL;

	// variável "p" para percorrer a lista
	t_exemplo *p = cabeca;
	// variável "aux_ant" para guardar o anterior
	t_exemplo *aux_ant = NULL;
	// flag "achou" que indica se achou o elemento
	int achou = 0;

	// percorre a lista
	while(p != NULL)
	{
		// se achou, então retorna 1
		if(p->v == v)
		{
			achou = 1;
			break;
		}
		// atualiza o "aux_ant"
		aux_ant = p;
		// aponta para o próximo
		p = p->prox;
	}

	// verifica se achou
	if(achou == 1)
	{
		// se "ant" for diferente de NULL
		if(ant)
			*ant = aux_ant; // guarda "aux_ant"
		return p;
	}

	// se chegou aqui, então não achou
	return NULL;
}

// função que remove um elemento da lista
// retorna 1 se conseguiu remover e 0 caso contrário
int remover_elemento(int v)
{
	// variável que guarda a referência para o elemento anterior
	// do elemento que vai ser removido
	t_exemplo *ant = NULL;

	// busca pelo elemento a ser removido
	// passa a referência para o "ant" (ponteiro para ponteiro)
	// "elem" é o elemento que será removido
	t_exemplo * elem = buscar_elemento(v, &ant);

	// se for NULL, é porque não existe, então retorna 0
	if(elem == NULL)
		return 0;

	// se chegou aqui, é porque o elemento existe e será removido

	// se o anterior for diferente de NULL, então
	// faz o próximo do anterior apontar para o próximo
	// do elemento que será removido
	if(ant != NULL)
		ant->prox = elem->prox;

	// se o elemento a ser removido é igual ao corrente, ou seja,
	// é o último elemento, então faz o corrente apontar para o anterior
	if(elem == corrente)
		corrente = ant;

	// se o elemento a ser removido é igual a cabeca, ou seja,
	// é o primeiro elemento, então faz a cabeca apontar para o próximo
	// do elemento a ser removido
	if(elem == cabeca)
		cabeca = elem->prox;

	// por último, dá um free no elemento a ser removido "elem" e coloca para NULL
	free(elem);
	elem = NULL;

	// retorna 1 indicando que removeu com sucesso
	return 1;
}

// função que retorna o tamanho da lista
int tamanho_lista()
{
	if(lista_vazia())
		return 0;

	t_exemplo *aux = cabeca;
	int tam = 0;

	while(aux != NULL)
	{
		tam++;
		aux = aux->prox;
	}
	return tam;
}

// função principal
int main(int argc, char * argv[])
{
 char escolha;
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
 printf("\n Sua escolha é ?: ");

 scanf("%s", escolha);
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

	return 0;
}
