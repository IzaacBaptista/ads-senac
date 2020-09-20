//1.FUP que leia um vetor de 10 números, 
//verifique quantos números Negativos há no vetor 
//e quantos números positivos
#include<iostream>
#include <iomanip> // PARA O setlocale
int const TAM=10;
int num[TAM],i;
main()
{
	  using namespace std;
	  setlocale(LC_ALL, "Portuguese"); 
      cout<<"\n Progama PARES e ÍMPARES.";
      cout<<"\n Informe "<<TAM<<" número. \n";
      for(i=0;i<TAM;i++)
      {
          cout<<"\n Informe o "<<i+1<<"o número: ";
          cin>>num[i];
      }
      
      cout<<"\n\n Números Negativos: ";
      for(i=0;i<10;i++)
      {
          if(num[i]<0)
              cout<<"\n "<<num[i];
      }
      
      cout<<"\n\n Números Positivos: ";
      for(i=0;i<TAM;i++){
          if(num[i]>=0)
              cout<<"\n "<<num[i];
      }
      cout<<"\n\n ";
}
