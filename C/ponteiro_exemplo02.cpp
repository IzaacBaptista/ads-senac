#include <stdio.h>
int main()
{
    int i,j;
    int *p;   //Um ponteiro para um Inteiro
    printf("\n\n %d %d", p, &i); 
	//Imprime o valor de p e o endereço de i
    p = &i; // p aponta para o endereço de i
    printf("\n\n %d %d", p, &i);
    //Imprime o valor de p e o endereço de i
    printf("\n\n\n");
    return 0;
}
