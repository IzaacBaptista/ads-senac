//1.FUP que leia um vetor de 10 n�meros, 
//verifique quantos n�meros Negativos h� no vetor 
//e quantos n�meros positivos
#include<iostream>
#include <iomanip> // PARA O setlocale
int const TAM=10;
int num[TAM],i;
main()
{
	  using namespace std;
	  setlocale(LC_ALL, "Portuguese"); 
      cout<<"\n Progama PARES e �MPARES.";
      cout<<"\n Informe "<<TAM<<" n�mero. \n";
      for(i=0;i<TAM;i++)
      {
          cout<<"\n Informe o "<<i+1<<"o n�mero: ";
          cin>>num[i];
      }
      
      cout<<"\n\n N�meros Negativos: ";
      for(i=0;i<10;i++)
      {
          if(num[i]<0)
              cout<<"\n "<<num[i];
      }
      
      cout<<"\n\n N�meros Positivos: ";
      for(i=0;i<TAM;i++){
          if(num[i]>=0)
              cout<<"\n "<<num[i];
      }
      cout<<"\n\n ";
}
