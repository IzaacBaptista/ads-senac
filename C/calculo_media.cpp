#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Função para cálculo da média */
/* Objetivo: Calcula a média aritmética para um conjunto de notas */
/* Parametros: int n - Tamanho do vetor e float *v - Endereco do primeiro elemento do vetor de notas */
/* Valor de Retorno: float - Retorna a média aritmética calculada */

float media(int n, float *v) {
    int i;
    float s = 0.0f;
    for(i=0; i<n; i++)
        s += v[i];
    return s/n;
}

/* função para cálculo da variância */
/* Objetivo: Calcula da Variancia para um conjunto de notas */
/* Parametros: int n - Tamanho do vetor e float *v - Endereco do primeiro elemento do vetor de notas */
/* Valor de Retorno: float - Retorna a variancia calculada */

float variancia(int n, float *v, float m) {
    int i;
    float s = 0.0f;
    for(i=0; i<n; i++)
        s += (v[i] - m) * (v[i] - m);
    return s/n;
}

main() {

    int i, n;
    float *v;
    float med, var;
    
    printf("Quantas notas serão lidas?: ");
    scanf("%i",&n);

    /*alocação dinâmica*/
    v = (float*) malloc (n*sizeof(float));

    /* tratamento de erro para alocação dinamica de memoria mal sucedida */
    if(v == NULL) {
        printf("Memória Insuficiente");
        return 1;
    }

    /*leitura dos valores*/
    for(i=0; i<n; i++) {
        printf("Entre com a nota %i: ",i);
        scanf("%f", &v[i]);
    }

   /* Calculo da media e da variancia */
    med = media(n,v);
    var = variancia(n,v,med);

    /* Impressao do resultado */
    printf("\n\n Media: %.2f \nVariancia: %.2f \n", med, var);
    getche();

    /*libera memória*/
    free(v);
    return 0;
}
