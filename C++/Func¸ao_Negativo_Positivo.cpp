#include<iostream>

int posit_negativo (int num);

using namespace std;
main()
{
      setlocale(LC_ALL, "Portuguese");
	  int num,result;
      cout<<"\nInforme um Número: ";
      cin>>num;
      result=posit_negativo(num);
      if (result==1)
        cout<<"\n O número informado é Positivo ";
      else
        cout<<"\n O número informado é Negativo ";
      cout<<"\n\n=================================";
      cout<<"\n\n\n";
     
}
//====== FIM DO PROGRAMA=========

// FUNÇÃO POSITIVO OU NEGATIVO     
      int posit_negativo (int num)
      {
      	if (num>= 0)
      	  return(1); //Positivos
      	else
      	  return(0); //Negativos
      }

