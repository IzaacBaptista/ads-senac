#include<iostream>

int posit_negativo (int num);

using namespace std;
main()
{
      setlocale(LC_ALL, "Portuguese");
	  int num,result;
      cout<<"\nInforme um N�mero: ";
      cin>>num;
      result=posit_negativo(num);
      if (result==1)
        cout<<"\n O n�mero informado � Positivo ";
      else
        cout<<"\n O n�mero informado � Negativo ";
      cout<<"\n\n=================================";
      cout<<"\n\n\n";
     
}
//====== FIM DO PROGRAMA=========

// FUN��O POSITIVO OU NEGATIVO     
      int posit_negativo (int num)
      {
      	if (num>= 0)
      	  return(1); //Positivos
      	else
      	  return(0); //Negativos
      }

