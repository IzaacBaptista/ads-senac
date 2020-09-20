#include<iostream>
void Tabuada(int num);
using namespace std;
main()
{
      setlocale(LC_ALL, "Portuguese");
	  int valor;
      cout<<"\nDigite um valor: ";
      cin>>valor;
      Tabuada(valor);
      cout<<"\n=======================";
      cout<<"\n\n\n";
}
//===================
//função Tabuada
//===================
      void Tabuada(int num)
      {
       for(int i=0;i<=10;i++)
       {
        cout<<"\n"<<num<<"x"<<i<<"="<<num*i;
       }
            }
