
/* FUP que verifique se o N�mero � Par ou Impar */
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
using namespace std; // OBRIGAT�RIO
int numero;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n=======================================  "; 
 cout<<" \n\t Par ou �mpar? ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe um N�mero: "; 
 cin>>numero;
 if (numero%2==0)
  {
  	cout<<"\n\n ESSE N�MERO � PAR";
  }
  else
  {
  	cout<<"\n\n ESSE N�MERO � �MPAR";
  }
   cout<<"\n\n\n";
} //fecha o bloco
