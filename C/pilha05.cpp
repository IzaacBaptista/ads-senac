#include <stdio.h>
#include <stdlib.h>

struct Node{
 int num;
 struct Node *prox; //Esse ponteiro do pr�prio tipo � obrigat�rio, n�o existe estrutura din�mica.
                    // de dados sem esse detalhe especial.
};
typedef struct Node node; // o typedef cria uma estrutura node do tipo Node

int tam;

int menu(void);
void inicia(node *PILHA);
void opcao(node *PILHA, int op);
void exibe(node *PILHA);
void libera(node *PILHA);
void push(node *PILHA);
node *pop(node *PILHA);


int main(void)
{
 node *PILHA = (node *) malloc(sizeof(node));
 if(!PILHA){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
 inicia(PILHA);
 int opt;

 do{
  opt=menu();
  opcao(PILHA,opt);
 }while(opt);

 free(PILHA);
 return 0;
 }
}

void inicia(node *PILHA)
{
 PILHA->prox = NULL;
 tam=0;
}

int menu(void)
{
 int opt;

 printf("Escolha a opcao\n");
 printf("0. Sair\n");
 printf("1. Zerar PILHA\n");
 printf("2. Exibir PILHA\n");
 printf("3. PUSH\n");
 printf("4. POP\n");
 printf("Opcao: "); 
 scanf("%d", &opt);

 return opt;
}

void opcao(node *PILHA, int op)
{
 node *tmp;
 switch(op){
  case 0:
   libera(PILHA);
   break;

  case 1:
   libera(PILHA);
   inicia(PILHA);
   break;

  case 2:
   exibe(PILHA);
   break;

  case 3:
   push(PILHA);
   break;

  case 4:
   tmp= pop(PILHA);
   if(tmp != NULL)
   printf("Retirado: %3d\n\n", tmp->num);
   break;

  default:
   printf("Comando invalido\n\n");
 }
}

int vazia(node *PILHA)
{
 if(PILHA->prox == NULL)
  return 1;
 else
  return 0;
}

node *aloca()
{
 node *novo=(node *) malloc(sizeof(node));
 if(!novo){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
  printf("Novo elemento: "); 
  scanf("%d", &novo->num);
  return novo;
 }
}


void exibe(node *PILHA)
{
 if(vazia(PILHA)){
  printf("PILHA vazia!\n\n");
  return ;
 }

 node *tmp;
 tmp = PILHA->prox;
 printf("PILHA:");
 while( tmp != NULL){
  printf("%5d", tmp->num);
  tmp = tmp->prox;
 }
 printf("\n        ");
 int count;
 for(count=0 ; count < tam ; count++)
  printf("  ^  ");
 printf("\nOrdem:");
 for(count=0 ; count < tam ; count++)
  printf("%5d", count+1);


 printf("\n\n");
}

void libera(node *PILHA)
{
 if(!vazia(PILHA)){
  node *proxNode,
     *atual;

  atual = PILHA->prox;
  while(atual != NULL){
   proxNode = atual->prox;
   free(atual);
   atual = proxNode;
  }
 }
}

void push(node *PILHA)
{
 node *novo=aloca();
 novo->prox = NULL;

 if(vazia(PILHA))
  PILHA->prox=novo;
 else{
  node *tmp = PILHA->prox;

  while(tmp->prox != NULL)
   tmp = tmp->prox;

  tmp->prox = novo;
 }
 tam++;
}


node *pop(node *PILHA)
{
 if(PILHA->prox == NULL){
  printf("PILHA ja vazia\n\n");
  return NULL;
 }else{
  node *ultimo = PILHA->prox,
              *penultimo = PILHA;

  while(ultimo->prox != NULL){
   penultimo = ultimo;
   ultimo = ultimo->prox;
  }

  penultimo->prox = NULL;
  tam--;
  return ultimo;
 }
}

/*
Struct e Cabe�alhos de Fun��es
O primeiro passo � a struct, vamos de Node (cada elemento de uma pilha � chamado de n�).
Ela vai ter apenas dois elementos, um n�mero inteiro e um ponteiro para outra struct 
do tipo Node.


Esse ponteiro do pr�prio tipo � obrigat�rio, n�o existe estrutura din�mica de dados 
sem esse detalhe especial. Na l�gica do funcionamento da pilha, vamos entender para 
que ele serve.

J� o outro elemento (int num) � s� para armazenarmos n�meros nessa pilha, pois vamos
pedir e mostrar esses n�meros. Mas note que isso � uma struct, podemos colocar quantos
elementos e do tamanho que quisermos, que a pilha vai funcionar do mesmo jeito.

Tamb�m colocamos todos os cabe�alhos das fun��es que iremos usar para programar a pilha em C,
por quest�es de organiza��o (o c�digo das fun��es ficar� abaixo).

Fun��o main()
Na fun��o main criamos a nossa pilha, que � uma struct Node, vamos chamar ela de "PILHA",
e � a base. Quando o primeiro elemento for adicionado, ele vai ser adicionado no ponteiro
"prox" da PILHA. Este n�, na verdade, n�o faz parte da pilha, ele serve apenas para indicar
onde ela come�a (come�a no ponteiro na qual ela aponta).
O resto da main � simplesmente um la�o do while, que fica exibindo um menu com as op��es para
trabalharmos com a pilha, que termina se digitarmos 0.

Fun��o menu() e opcao()
Essas s�o as fun��es respons�veis pela a��o, a intera��o o usu�rio e a pilha.

A fun��o menu() simplesmente exibe as op��es poss�veis e pede um inteiro ao usu�rio.
Este inteiro ser� usado e passado para a fun��o opcao(), que junto com a pilha 
(ponteiro *PILHA) vai servir para chamar a fun��o espec�fica, de acordo com o que o
usu�rio escolheu.

Na fun��o opcao(), basicamente existe um switch que vai tratar a op��o escolhida pela
usu�rio, e chamar a fun��o correta. Sem segredo.

Fun��o inicia()
Esta fun��o � respons�vel por inicializar a pilha.
Inicializar � simplesmente preparar a pilha para ser utilizada, simplesmente apontando
seu ponteiro *prox para NULL.

Essa fun��o � chamada automaticamente no in�cio de nosso programa em C, e quando zeramos
a pilha.

Fun��o vazia()
Esta fun��o simplesmente checa se a pilha est� vazia ou n�o.
Basta olhar para onde aponta a base (*PILHA), se apontar para NULL � porque ela est� vazia,
sen�o, � porque existem n�s nesta estrutura de dados din�mica.

Fun��o aloca()
Visando deixar nosso algoritmo bem feito, estruturado e organizado, � interessante separar
cada ideia em uma fun��o diferente, com um prop�sito bem evidente e �nico.
A fun��o aloca() � um exemplo dessa organiza��o.
Como o nome sugere, ele serve para alocar n�s.
Sempre que formos adicionar um elemento na pilha, temos que alocar mem�ria para ele.
Essa fun��o aloca a mem�ria necess�ria pro n� (struct Node), pede o n�mero que o usu�rio
quer armazenar) e retornar o endere�o da mem�ria alocada.

Fun��o libera()
T�o importante quanto alocar mem�ria para cada n� da pilha de nossa estrutura de dados,
� liberar esse espa�o de mem�ria. A fun��o libera faz isso, vai liberando o espa�o alocado
de cada n� de nossa pilha.

Usamos dois ponteiros para a struct do n�, o ponteiro que aponta para o elemento atual e o
ponteiro que aponta para o pr�ximo elemento.
Pegamos o ponteiro que aponta para o n� atual e usamos para desalocar aquele espa�o de mem�ria,
em seguida o ponteiro que apontava para o atual aponta para o pr�ximo, e isso segue at� o fim
da pilha, desalocando cada um dos n�s da estrutura de dados.

Fun��o exibe()
Essa � a fun��o respons�vel por exibir todos os elementos da pilha.
Como em cada n� dessa estrutura de dados possui um inteiro que o usu�rio inseriu, essa fun��o,
no fim das contas, vai exibir os n�meros da pilha.

Essa fun��o declara um ponteiro que vai come�ar apontando para o primeiro elemento da pilha,
exibe o n�mero armazenado ali, pega o endere�o do pr�ximo n�, exibe o que est� armazenado
nele tamb�m, e assim se segue, at� o fim da pilha (quando *prox aponta para NULL).

Fun��o push()
Agora vamos a parte que mais interessa em se tratando de estrutura de dados, e especificamente,
 sobre pilhas em C: as fun��es push e pop.

Push em ingl�s � empurrar, vamos empurrar, colocar um elemento, um n� na pilha.
O primeiro passo � alocar espa�o para esteve novo n� da pilha, o que � feito com ajuda da
 fun��o aloca().
Como � uma pilha, seu �ltimo elemento (que � esteve novo), deve apontar para NULL, pois
 isso caracteriza o fim da pilha.

Adicionado o elemento, vamos procurar o �ltimo elemento da pilha.
Temos o ponteiro *PILHA que aponta para a base.
Se a pilha estiver vazia, �timo! Fazemos o ponteiro *prox apontar para esteve novo n�, e
 tudo ok.

Se a pilha n�o for vazia, vamos achar o �ltimo elemento atrav�s de um ponteiro *tmp que
 vai apontar para o primeiro elemento da pilha (PILHA->prox aponta para o primeiro n�).

E como sabemos que o n� atual � o �ltimo?
Basta checar seu ponteiro *prox, se ele apontar para NULL, ele � �ltimo.
Se n�o apontar, � porque aponta para um novo n�, ent�o fazemos nosso ponteiro *tmp apontar
 para este novo n�, sempre, at� chegar no �ltimo.

Quando "tmp->prox" apontar para NULL, � porque *tmp est� apontando para o �ltimo n�.
Agora, vamos fazer o pr�ximo n� apontar para nosso novo n�: tmp->prox = novo
E pronto! Fun��o push feita! Adicionamos um novo n� na pilha.

Fun��o pop()
Agora vamos para a fun��o pop, o outro pilar da estrutura de dados din�mica que � a pilha.
Esta fun��o vai tirar o �ltimo n� da pilha, e retir�-lo de l�.

Primeiro fazemos uma checagem se a pilha est� vazia (PILHA->prox aponta pra NULL).
Se estiver, n�o h� nada a ser feito, pois n�o h� n� para ser retirado da pilha.

Do contr�rio, vamos utilizar dois ponteiros para struct Node, o "ultimo" e o "penultimo".
Basicamente, o que vamos fazer � que o "ultimo" aponte para o �ltimo elemento da pilha e o
"penultimo" aponte para o �ltimo n� da pilha.
O motivo disso � simples: vamos retornar o �ltimo n� da pilha e vamos retir�-lo da lista
(ent�o ele vai se perder, por isso precisaremos sempre do pen�ltimo, pois este vai se tornar
 o novo �ltimo n� da lista).

O que vamos fazer � buscar o �ltimo n� (que � aquele que tem o ponteiro *prox apontando pra
NULL).
E sempre que avan�armos na pilha com o ponteiro "ultimo", fazemos com que o "penultimo"
 tamb�m avance (ora, o pen�ltimo n� � aquele que tem o ponteiro *prox apontando para o
 ponteiro *ultimo).

Essa l�gica � feita testando ultima->prox, quando n�o for NULL, o ponteiro "penultimo"
 passa a ser o "ultimo" e o "ultimo" vai ser o "ultimo->prox", que � o pr�ximo n� da pilha.
Note que agora que demos um passo a frente na pilha, com os dois ponteiros.
E isso s� para quando estivermos apontando para o �ltimo e pen�ltimo n� da pilha.

Quando estivermos nesse ponto, fazemos "penultimo->prox" apontar para NULL, pois vai
caracterizar que o pen�ltimo n� ser�, agora, o �ltimo n� (pois aponta pra NULL), ou seja:
retiramos o �ltimo n� da pilha!

E o que fazemos com o �ltimo n�?
Vamos retornar ele! Se estamos tirando ele da pilha, � porque queremos o que tem nele, 
seja l� pra que for. Ent�o retornamos ele pra fun��o que o chamou (a fun��o opcao()),
ela exibe o valor desse �ltimo elemento da pilha e ent�o o descarta (liberando a mem�ria dele).

*/
