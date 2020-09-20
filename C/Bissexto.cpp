
/* FUP que verifique se o Número é Par ou Impar */
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
using namespace std; // OBRIGATÓRIO
int ano;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n=======================================  "; 
 cout<<" \n\t Verificando se o Ano é Bissexto ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe um Número: "; 
 cin>>ano;
 if (ano%4==0)
  {
  	cout<<"\n\n ESSE ANO É BISSEXTO";
  }
  else
  {
  	cout<<"\n\n ESSE ANO NÃO É BISSEXTO";
  }
   cout<<"\n\n\n";
} //fecha o bloco
