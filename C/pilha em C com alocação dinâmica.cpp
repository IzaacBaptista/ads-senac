#include <stdio.h>
#include <string.h>
#include <malloc.h>

/*Declaração do tipo nó para a fila, composto de
ponteiro para o próximo nó e de um campo para dado
que no caso é o campo char dado[30];
*/
typedef struct no {
      
       char dado[30];
       struct no *proximo;
      
       } no;
      
no *topo = NULL; //Ponteiro para o topo da pilha
no *alocar; //Ponteiro para fazer alocação


/*Rotina que faz a inserção de elementos na pilha
O Parâmetro dado recebe um ponteiro para string
A função não retorna valor algum
*/
void push(char *dado) {
    
    alocar = (struct no *) malloc(sizeof(struct no)); //Faz alocação na memória
        
    if (!alocar) { //Se não for possível a alocação, sai do programa
       printf("Falta de memória");
       
    }
    
    strcpy(alocar->dado, dado); //Copia o dado para o novo nó alocado
    
     if (!topo) { //Se não houver elemento ainda na pilha, insere
                  //na base, apontando o ponteiro de topo para o único
                  //elemento até então inserido
         topo = alocar;
         topo->proximo = NULL;
        
     }
    
     else //se não...
    
     {
         alocar->proximo = topo; //Aponta o próximo para o "antigo" topo da pilha
         topo = alocar;          //Aponta o ponteiro de topo para o dado que foi alocado
        
     }
}

/*
Rotina que retira elementos da pilha
O elemento retirado sempre é o que está no topo
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
