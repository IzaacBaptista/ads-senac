/* FUP que leia um vetor de 10 n�meros.
Ap�s verifique quantos n�meros s�o pares e quantos n�meros s�o �mpares.
Mostre os n�meros pares e mostre os n�meros �mpares separadamente.*/
#include<iostream>
#include <iomanip> // PARA O setlocale
int const TAM=10;
int num[TAM],i,pares=0,impares=0;
main()
{
	  using namespace std;
	  setlocale(LC_ALL, "Portuguese"); 
      cout<<"\n Progama PARES e �MPARES.";
      cout<<"\n Informe "<<TAM<<" numeros. \n";
      for(i=0;i<TAM;i++)
      {
          cout<<"\n Informe o "<<i+1<<"o numero: ";
          cin>>num[i];
          if(num[i]%2==0)
              pares++;
          else
              impares++;
      }
      cout<<"\n\n  Existe no Vetor: "<< pares<<"  N�meros Pares: ";
      cout<<"\n\n  Existe no Vetor: "<< impares<<"  N�meros �mpares: ";
      cout<<"\n\n ";
}
