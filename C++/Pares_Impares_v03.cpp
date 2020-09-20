/* FUP que leia um vetor de 10 números.
Após verifique quantos números são pares e quantos números são ímpares.
Mostre os números pares e mostre os números ímpares separadamente.*/
#include<iostream>
#include <iomanip> // PARA O setlocale
int const TAM=10;
int num[TAM],i,pares=0,impares=0;
main()
{
	  using namespace std;
	  setlocale(LC_ALL, "Portuguese"); 
      cout<<"\n Progama PARES e ÍMPARES.";
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
      cout<<"\n\n  Existe no Vetor: "<< pares<<"  Números Pares: ";
      cout<<"\n\n  Existe no Vetor: "<< impares<<"  Números Ímpares: ";
      cout<<"\n\n ";
}
