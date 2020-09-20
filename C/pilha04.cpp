/*********************************
Autor: Fernando Krein Pinheiro (Adaptado: clawer®)
Data: 19/01/2012
Linguagem: C
========= IMPORTANTE ===========
O código esta livre para usar, citar e compartilhar desde que
mantida sua fonte e seu autor.Obrigado.
*********************************
*/
 
#include <stdio.h>
#define capacidade 30 //definindo uma constante
 
struct stack
{
       int topo, item[capacidade];
};
 
/*============== Inicia Pilha ======================*/
void inic_pilha (struct stack *p)
{
     p->topo = -1; // -> chama-se "Seleção de elemento por ponteiro", e serve para acessar uma 
	              //variável membro de uma estrutura, quando essa for criada dinamicamente ou
				 // passada por referência(ponteiros).
}
 
/*=============== Verifica pilha Cheia ==============*/
int pilha_cheia (struct stack *p)
{
    if (p->topo == (capacidade-1))
    {
          printf ("\n\n\t\tA Pilha esta Cheia!!!");
          return 1;
    }else
        return 0;
}
 
/*=============== Verifica pilha Vazia ==============*/
int pilha_vazia (struct stack *p)
{
    if (p->topo == -1)
    {
         printf ("\n\n\t\tA Pilha esta Vazia!!!");
         return 1;
    }
    else
     return 0;
}
 
/*=============== Verifica pilha Vazia 2 ============*/
int pilha_vazia2 (struct stack *p)
{
    if (p->topo == -1)
       return 1;
    else
       return 0;
}
 
/*================== Empilha  ========================*/
int push (struct stack *p, int valor)
{
     return (p->item[++(p->topo)] = valor);
}
 
/*================== Desempilha  =====================*/
int pop (struct stack *p)
{
    int aux;
    aux = p->item[(p->topo)--];
    return aux;
}
 
/*================== Mostra Pilha  ===================*/
int mostra (struct stack *p)
{
    int aux;
    if (pilha_vazia2 (p))
       return 1;
    else
    {
        aux = pop (p);
        printf ("%d,", aux);
        mostra (p);
        return 0;
    }
}
 
/*================== Reempilha  ========================*/
int reempilha (struct stack *p, struct stack *p_par, struct stack *p_impar)
{
    int aux;
    if (pilha_vazia (p))
       return 1;
    else
    {   //seleciona os valores Impares
        if (p->item[p->topo]%2)
        {
               aux = pop (p);
               push (p_impar, aux);
        }
        else //seleciona valores pares
        {
               aux = pop (p);
               push (p_par, aux);
        }
        reempilha (p, p_par, p_impar);
        return 0;
    }
 
}
 
/*================== Funcao para pegar os valores a empilhar  =============*/
int empilha (struct stack *p)
{
    int valor;
    printf ("Informe um valor para ser empilhado ou -1 para sair ");
    scanf ("%d", &valor);
    if (pilha_cheia (p))
       return 1;
    else
    {
        if (valor == -1)
                  return 0;
        else
        {
            push (p, valor);
empilha (p);
            return 0;
        }
    }
}
 
/*======================== MAIN ===============================*/
int main ()
{
    struct stack pilha, pilha_par, pilha_impar;
    inic_pilha (&pilha);
    inic_pilha (&pilha_impar);
    inic_pilha (&pilha_par);
    empilha (&pilha);
    reempilha (&pilha, &pilha_par, &pilha_impar);
    printf ("\nPilha Par:");
    mostra (&pilha_par);
    printf ("\n\nPilha Impar: ");
    mostra (&pilha_impar);
    printf("\n\n\n");
    return 0;
}
