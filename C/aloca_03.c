#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main() {
  int *p, *q;
  int x; 
  p = (int*) malloc(sizeof(int));  // aloca dinamicamente uma variavel do tipo  inteiro ( a variavel é um ponteiro )
  *p = 3;                          // armazena 3 na variavel p do tipo inteiro
  q = p;                          // faz o ponteiro q receber o ponteiro p alocado
  printf("%d %d\n", *p, *q);     // imprime o conteudo dos endereços apontados pelos ponteiros p e q
  x = 7;                        // atribui o valor 7 a variavel x do tipo inteiro  
  *q = x;                      // atribui o valor da variavel x ao conteudo do endereço apontado pelo ponteiro q
  printf("%d %d\n", *p, *q);   // imprime o conteudo dos endereços apontados pelos ponteiros p e q
  p = (int*) malloc(sizeof(int)); // aloca dinamicamente uma variavel do tipo inteiro 
  *p = 5;                       // armazena 5 na variavel do tipo ponteiro
  printf("%d %d\n", *p, *q);   //  imprime o conteudo dos endereços apontados pelos ponteiros p e q
  getch();                    // aguarda o usuario pressionar uma tecla qualquer para finalizar o programa
}
