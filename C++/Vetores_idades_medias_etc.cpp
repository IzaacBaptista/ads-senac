/*FUP que leia um vetor referente a idade de 10 pessoas, calcule a m�dia
das idades das pessoas e a quantidade de pessoas mais velhas do que a m�dia
das idades.
*/
#include<iostream>
#include <iomanip> // PARA O setlocale
int const TAM=10;
int idades[TAM],i,qtde_velhos=0;
float media=0, acumula_idades=0; 
main()
{
  using namespace std;
  setlocale(LC_ALL, "Portuguese"); 
  cout<<"\n Progama Vetores de Idades.";
  cout<<"\n Informe "<<TAM<<" idades. \n";
  for(i=0;i<TAM;i++)
  {
    cout<<"\n Informe a "<<i+1<<"� Idade: ";
    cin>>idades[i];
    acumula_idades = acumula_idades+idades[i];
  }
  // Calculando a M�dia das Idades
  media= acumula_idades/TAM;
  // Verificando os mais velhos
  for(i=0;i<TAM;i++)
  {
   if(idades[i]>media)
      qtde_velhos++; // SOMANDO OS MAIS VELHOS
  }
  // IMPRIMINDO OS RESULTADOS
   cout<<"\n\n A m�dia das idades �: "<< media;
   cout<<"\n\n Existem : "<< qtde_velhos<<" pessoas com idade superior a m�dia das idades.";
    
      cout<<"\n\n ";
      
}
