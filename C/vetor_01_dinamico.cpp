/* O programa abaixo. utiliza as funções malloc e realloc para criar e aumentar 
o tamanho de um vetor dinamicamente (em tempo de execução). No caso de algum erro,
as funções retornam um ponteiro nulo (NULL) para indicar erro de alocação de memória.
*/
#include <stdio.h>
#include <stdlib.h>
main() {
    int *p;
    int i,k, n;
    
    printf("\nDigite a quantidade de numeros que serao digitados ->");
    scanf("%d", &i);

    /* 
    A função malloc reserva espaço suiciente para um vetor de inteiros.
    Caso sejam digitados 5 elementos, serão reservados 20 bytes, pois cada
    inteiro ocupa 4 bytes na memória 
    */
    
    p = (int *)(malloc(i*sizeof(int)));
    if( p == NULL ) {
        printf("\nErro de alocacao de memoria");
        exit(1);
    }
    
    for( k=0;k<i;k++) {
        printf("Digite o numero para o indice %d ->", k);
        scanf("%d", &p[k]);
    }
    
    for( k=0;k<i;k++) {
        printf("O numero do indice %d eh %d\n", k, p[k]);
    }
    printf("\nDigite quantos elementos quer adicionar ao vetor ->");
    scanf("%d", &n);
    
    /* A função realloc aumenta ou diminui o tamanho do vetor dinamicamente. 
	Ela recebe o ponteiro para o vetor anterior e retorna o novo espaço alocado. */
    p = (int *)(realloc(p,(i+n)*sizeof(int)));
    if( p == NULL ) {
        printf("\nErro de re-alocacao de memoria");
        exit(1);
    }
    
    for(k=0;k<(n+i);k++) {
        printf("Digite o numero para o indice %d ->", k);
        scanf("%d", &p[k]);
    }

    for( k=0;k<(i+n);k++) {
        printf("O numero do indice %d eh %d\n", k, p[k]);
    }

    free(p);
    return 0;
}
