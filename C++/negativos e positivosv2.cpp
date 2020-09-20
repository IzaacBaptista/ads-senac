/* FUP que leia um vetor de 10 números.
Após verifique quantos números são pares e quantos números são ímpares.
Mostre os números pares e mostre os números ímpares separadamente.*/
#include<iostream>
#include <iomanip> // PARA O setlocale
int const TAM=10;
int num[TAM],i,positivo=0,negativo=0;
main()
{
	  using namespace std;
	  setlocale(LC_ALL, "Portuguese"); 
      cout<<"\n Progama POSITIVOS e NEGATIVOS.";
      cout<<"\n Informe "<<TAM<<" numeros. \n";
      for(i=0;i<TAM;i++)
      {
          cout<<"\n Informe o "<<i+1<<"o numero: ";
          cin>>num[i];
          if(num[i]>=0)
              positivo++;
          else
              negativo++;
      }
      cout<<"\n\n  Existe no Vetor: "<< positivo<<"  Números Positivos: ";
      cout<<"\n\n  Existe no Vetor: "<< negativo<<"  Números Negativos: ";
      cout<<"\n\n ";
}
