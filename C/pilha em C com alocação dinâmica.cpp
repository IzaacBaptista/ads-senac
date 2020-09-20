#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*Declara��o do tipo n� para a fila, composto de
ponteiro para o pr�ximo n� e de um campo para dado
que no caso � o campo char dado[30];
*/
typedef struct no {
      
       char dado[30];
       struct no *proximo;
      
       } no;
      
no *topo = NULL; //Ponteiro para o topo da pilha
no *alocar; //Ponteiro para fazer aloca��o


/*Rotina que faz a inser��o de elementos na pilha
O Par�metro dado recebe um ponteiro para string
A fun��o n�o retorna valor algum
*/
void push(char *dado) {
    
    alocar = (struct no *) malloc(sizeof(struct no)); //Faz aloca��o na mem�ria
        
    if (!alocar) { //Se n�o for poss�vel a aloca��o, sai do programa
       printf("Falta de mem�ria");
       
    }
    
    strcpy(alocar->dado, dado); //Copia o dado para o novo n� alocado
    
     if (!topo) { //Se n�o houver elemento ainda na pilha, insere
                  //na base, apontando o ponteiro de topo para o �nico
                  //elemento at� ent�o inserido
         topo = alocar;
         topo->proximo = NULL;
        
     }
    
     else //se n�o...
    
     {
         alocar->proximo = topo; //Aponta o pr�ximo para o "antigo" topo da pilha
         topo = alocar;          //Aponta o ponteiro de topo para o dado que foi alocado
        
     }
}

/*
Rotina que retira elementos da pilha
O elemento retirado sempre � o que est� no topo
*/
char * pop() {
    
    char *ponteiro = topo->dado;
    topo = topo->proximo;
    return ponteiro;

    
    }

/*Imprime todos os elementos da pilha na tela
na ordem de retirada
*/
void imprimir() {
     no *ponteiro = topo;
     while (ponteiro) {
           printf("\n%s", ponteiro->dado);
           ponteiro = ponteiro->proximo;
          }
     }

/*Rotina principal
com alguns pushs e pops
*/      
int main() {
   char dado[30];
    printf("\nInserir: ");
    gets(dado);
    push(dado);
    printf("\nInserir: ");
    gets(dado);
    push(dado);
    printf("\nInserir: ");
    gets(dado);
    push(dado);
    printf("\nInserir: ");
    gets(dado);
    push(dado);
    imprimir();
    printf("\nRetirar: ");
    getchar();
    printf("\nSaiu da pilha: %s", pop());
    imprimir();
    printf("\nRetirar: ");
    getchar();
    printf("\nSaiu da pilha: %s", pop());
    imprimir();
    getchar();
}
