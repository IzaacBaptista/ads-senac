/* FUP que leia dois vetores de 5 números, após crie um vetor que receba
a soma dos dois vetores lidos . Imprima o vetor resultante:
Autor: Hayuros Silva.*/
#include<iostream>
#include <iomanip>
#include "soma_vetores.h"
int const TAM=5;
int const SOMA=1;
int num[TAM],num2[TAM],soma[SOMA],acum1,acum2;
int i;
main()
{
    using namespace std;
    setlocale(LC_ALL, "Portuguese");
    cout<<"\n\n========================================================";
    cout<<"\n\n\a Progama para somar o valor dos Vetores.";
    cout<<"\n\n\a Informe "<<TAM + TAM<<" numeros.";
    cout<<"\n\n========================================================";
    for(i=0; i<TAM; i++) {
        cout<<"\n Informe o "<<i+1<<" Número: \a";
        cin>>num[i];
        acum1=acum1+num[i];
    }
    for(i=0; i<TAM; i++) {
        cout<<"\n Informe o "<<i+6<<" Número: \a";
        cin>>num2[i];
        acum2=acum2 + num2[i];
    }
    soma_vetores(int& x[], int& y[]);

    cout<<"\n\n\a A soma dos Vetores é: "<<soma[i];

    cout<<"\n\n ";
}
