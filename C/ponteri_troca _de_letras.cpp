/*Fa�a um programa que modifique as vogais de uma frase.
O programa deve ler uma frase (max. 100 caracteres) e armaze�-la num vetor.
Imprimir a frase lida trocando as vogais, isto �, trocar 'a' pelo 'u', 'e' pelo 'o',
'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'.
Usar uma fun��o void para realizar a troca e uma fun��o para realizar a
impress�o da frase trocada.
A fun��o deve ter como par�metro um ponteiro char referente ao vetor.
Dica: Use a fun��o�gets()�da biblioteca string.h para realizar a leitura da frase.
Use o switch para realizar as trocas. S� considere as letras min�sculas.

*/

#include<stdio.h>
#include<string.h>
void troca(char *vet)
{   int i, tam;
    tam = strlen(vet);
    for (i=0; i < tam; i++)
    {
        switch(*vet)
        {
        case 'a':
            *vet = '?';
            break;
        case 'e':
            *vet='*';
            break;
        case 'i':
            *vet='#';
            break;
        case 'o':
            *vet='a';
            break;
        case 'u':
            *vet='$';
            break;
        case 's':
            *vet='l';
            break;
        case 'm':
            *vet='f';
            break;
        case 'w':
            *vet='b';
            break;
        case 't':
            *vet='p';
            break;
        case 'n':
            *vet='c';
            break;
        }
        vet++;
    }
}
void imprime(char *vet)
{   int i;
    char *ptr;
    ptr = vet;
    printf("\n\n");
    for (i=0; i < strlen(vet); i++)
    {   printf("%c", *ptr);
        ptr++;
    }
}

main()
{   char vet[100];
    printf("\n\nDigite uma frase: ");
    gets(vet);
    troca(vet);
    imprime(vet);
}
// Agora � sua vez: seja criativo e modifique as trocas para algumas consoantes ou vogais
