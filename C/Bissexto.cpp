
/* FUP que verifique se o N�mero � Par ou Impar */
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
using namespace std; // OBRIGAT�RIO
int ano;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n=======================================  "; 
 cout<<" \n\t Verificando se o Ano � Bissexto ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe um N�mero: "; 
 cin>>ano;
 if (ano%4==0)
  {
  	cout<<"\n\n ESSE ANO � BISSEXTO";
  }
  else
  {
  	cout<<"\n\n ESSE ANO N�O � BISSEXTO";
  }
   cout<<"\n\n\n";
} //fecha o bloco
