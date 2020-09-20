#include <stdio.h>
#include <stdlib.h>

//Estrutura base do nó.
struct node
{
    int nData;
    struct node *pLink;
};
 
 
//Função para mostrar o nó na tela.
void displayLL(struct node *p)
{
    printf("Mostrando a lista:\n"); 
    if(p)
    {
        do
        {
            printf(" %d", p->nData);
            p=p->pLink;
        }
        while(p);
    }
    else
        printf("Lista vazia.");
}
 
 
 
int main()
{
    struct node *pNode1 = NULL;
    struct node *pNode2 = NULL;
    struct node *pNode3 = NULL;
    struct node *pNode4 = NULL;
    struct node *pNode5 = NULL;
    struct node *pNode6 = NULL;
    
     
    //Criando os nos e associando os dados.
    pNode1 = (struct node*) malloc(sizeof(struct node*));
    pNode1->nData = 10;
     
    pNode2 = (struct node*) malloc(sizeof(struct node*));
    pNode2->nData = 20;
     
    pNode3 = (struct node*) malloc(sizeof(struct node*));
    pNode3->nData = 30;
    
    pNode4 = (struct node*) malloc(sizeof(struct node*));
    pNode4->nData = 40;
    
    pNode5 = (struct node*) malloc(sizeof(struct node*));
    pNode5->nData = 50;
    
    pNode6 = (struct node*) malloc(sizeof(struct node*));
    pNode6->nData = 60;
     
    //Conectando os nós
    pNode1->pLink = pNode2;
    pNode2->pLink = pNode3;  
    pNode3->pLink = pNode4;
    pNode4->pLink = pNode5;
    pNode5->pLink = pNode6;
    pNode6->pLink = NULL;
   
        
    //Mostrando a lista.
    if(pNode1)  
        displayLL(pNode1);
  
  return 0;
}
