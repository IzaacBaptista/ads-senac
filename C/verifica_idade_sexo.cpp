/* FUP que verifique se a pessoa poder� ir na Igreja
sozinha (o) nas seguintes condi��e:
Rapaz s� poder� ir na Igreja sozinho se for maior
 de 18 anos.

Garota s� poder� ir na Igreja sozinha se for m
 maior de 35 anos.
*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // PARA a fun��o toupper ()
using namespace std; // OBRIGAT�RIO
char sexo;
int idade;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n===========================================  "; 
 cout<<" \n\t SER� QUE VOC� PODER� SAIR SOZINHO(A)? ";
 cout<<" \n===========================================  "; 
 cout<<"\n\n\n Informe uma letra para o Sexo:  ";
 cin>>sexo;
 sexo=toupper (sexo); //TRANSFORMA EM MAIUSCULO
 cout<<"\n\n\n Informe sua Idade:  ";
 cin>>idade;
 if ((sexo=='M') && (idade >=18))
    cout<<"\n\n Poder� ir na Igreja sozinho";
 else
 if ((sexo=='F') && (idade >=35))
    cout<<"\n\n Poder� ir na Igreja sozinha";
else
   cout<<"\n\n Ai ai ai:  Vai ficar em casa!";

  
   cout<<"\n\n\n";
} //fecha o bloco
