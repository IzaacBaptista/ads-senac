/* FUP que verifique se a pessoa poderá ir na Igreja
sozinha (o) nas seguintes condiçõe:
Rapaz só poderá ir na Igreja sozinho se for maior
 de 18 anos.

Garota só poderá ir na Igreja sozinha se for m
 maior de 35 anos.
*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // PARA a função toupper ()
using namespace std; // OBRIGATÓRIO
char sexo;
int idade;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n===========================================  "; 
 cout<<" \n\t SERÁ QUE VOCÊ PODERÁ SAIR SOZINHO(A)? ";
 cout<<" \n===========================================  "; 
 cout<<"\n\n\n Informe uma letra para o Sexo:  ";
 cin>>sexo;
 sexo=toupper (sexo); //TRANSFORMA EM MAIUSCULO
 cout<<"\n\n\n Informe sua Idade:  ";
 cin>>idade;
 if ((sexo=='M') && (idade >=18))
    cout<<"\n\n Poderá ir na Igreja sozinho";
 else
 if ((sexo=='F') && (idade >=35))
    cout<<"\n\n Poderá ir na Igreja sozinha";
else
   cout<<"\n\n Ai ai ai:  Vai ficar em casa!";

  
   cout<<"\n\n\n";
} //fecha o bloco
