// Sem o uso de Ponteiros como argumentos de funções
#include <stdio.h>
#include <iostream>

void troca(int& x, int& y);

main()
{
    int a, b;

    printf("Entre dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Voce entrou com %d e %d\n", a, b);    

    /* Troca a e b */
    troca(a, b);
    
    printf("Trocados, eles sao %d e %d\n", a, b);
}
//Função Troca
void troca(int& x, int& y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}
