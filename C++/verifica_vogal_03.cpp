/* FUP que verifique se a letra informada
� referente ao sexo da pessoa */

#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // PARA a fun��o toupper ()
using namespace std; // OBRIGAT�RIO
char letra;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n=======================================  "; 
 cout<<" \n\t Verificando se a  Letra � uma VOGAL ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe uma Letra: ";
 cin>>letra;
 letra=toupper (letra);
 if ((letra =='A') || (letra =='E')||(letra =='I') || (letra =='O') || (letra =='U'))
  
     {
  	  cout<<"\n\n A letra informada � uma VOGAL";
     }
     else
     {
	   cout<<"\n\n Esse caracter N�o � VOGAL";
       }
     
   cout<<"\n\n\n";
} //fecha o bloco
