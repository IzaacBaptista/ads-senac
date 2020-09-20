#include <stdio.h>
#define MAXSIZE 5
 
struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;
 
void push(void);
int  pop(void);
void display(void);
 
main ()
{
    int escolha;
    int opcao = 1;
    s.top = -1;
 
    printf ("OPERACOES DA PILHA\n");
    while (opcao)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    SAIR           \n");
        printf ("------------------------------------------\n");
 
        printf ("O que vc deseja fazer? \n");
        scanf    ("%d", &escolha);
        switch (escolha)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 1;
        }
        fflush (stdin); //A função fflush descarrega os buffers de saída de um fluxo de dados
        printf ("Deseja continuar? (0 para encerrar ou 1 para continuar)\n");
        scanf    ("%d", &opcao);
    }
}
/*  Adiciona elementos na pilha */
void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Pilha cheia\n");
        return;
    }
    else
    {
        printf ("Insira o elemento: \n");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
/*  Retira elementos da pilha */
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Pilha vazia\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("\n Elemento retirado = %d \n", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
/*  Exibe os valores da pilha */
void display ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Pilha vazia\n");
        return;
    }
    else
    {
        printf ("\n Elementos na pilha: \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}
