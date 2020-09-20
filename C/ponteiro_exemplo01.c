/*Acesso ao valor guardado dentro de uma posição na memória apontada por um ponteiro,
 usar o operador asterisco “*” na frente do nome do ponteiro
*/
#include <stdio.h>
main()
{
  int i=100; // declara i e atribui 10
  int *p;   // declara um ponteiro para a variável i
  p=&i;    // atribui ao ponteiro o endereço da variável i
  printf("\n Conteudo apondado por p: %d", *p);
  *p=12;
  printf("\n Conteudo apondado por p: %d", *p);
  printf("\n Conteudo de i: %d", *p);
  printf("\n\n\n");
}
 
