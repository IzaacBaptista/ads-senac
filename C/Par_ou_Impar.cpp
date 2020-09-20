
/* FUP que verifique se o Número é Par ou Impar */
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
using namespace std; // OBRIGATÓRIO
int numero;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n=======================================  "; 
 cout<<" \n\t Par ou Ímpar? ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe um Número: "; 
 cin>>numero;
 if (numero%2==0)
  {
  	cout<<"\n\n ESSE NÚMERO É PAR";
  }
  else
  {
  	cout<<"\n\n ESSE NÚMERO É ÍMPAR";
  }
   cout<<"\n\n\n";
} //fecha o bloco
