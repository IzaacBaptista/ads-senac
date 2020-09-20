// Com o uso de Ponteiros como argumentos de funções
#include <stdio.h>

void troca(int *, int *);

/* function troca(px, py)
 *  acao:        troca os valores inteiros apontados por px e py
 *  entrada:     apontadores px e py
 *  saida:       valor de  *px e *py trocados
 *  suposicoes:  px e py sao apontadores validos
 *  algoritmo:   primeiro guarda o primeiro valor em um temporario e troca
 */
void troca(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}

main(void)
{
    int a, b;

    printf("Entre dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Voce entrou com %d e %d\n", a, b);    

    /* Troca a e b -- passa enderecos */
    troca(&a, &b);
    
    printf("Trocados, eles sao %d e %d\n", a, b);
}
