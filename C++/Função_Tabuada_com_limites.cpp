#include<iostream>
void Tabuada(int num,int inicio, int fim);
using namespace std;

main()
{
      int num,inicio,fim;
      cout<<"\nDigite um valor: ";
      cin>>num;
      cout<<"\nDigite um limite inicial: ";
      cin>>inicio;
      cout<<"\nDigite um limite final: ";
      cin>>fim;
      Tabuada(num,inicio,fim);
      cout<<"\n=======================";
      cout<<"\n\n\n";
}
//===================
//função Tabuada
//===================
      void Tabuada(int num,int inicio, int fim)
      {
        int i; // variável LOCAL
		for(i=inicio;i<=fim;i++)
         {
           cout<<"\n"<<num<<"x"<<i<<"="<<num*i;
         }
      }
