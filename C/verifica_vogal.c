/* FUP que verifique se a letra informada
� referente ao sexo da pessoa */

#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <stdio.h>
#include <conio.h>

//using namespace std; // OBRIGAT�RIO
//char letra;
main()
{//inicio do bloco
 //setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 
 char letra;
 
 printf(" \n=======================================  ");
 printf(" \n\t Verificando se a  Letra � uma VOGAL ");
 printf(" \n=======================================  "); 
 printf("\n\n\n Informe uma Letra: "); 
 cin>>letra;
 if ((letra =='A') || (letra =='a'))
  {
  	cout<<"\n\n A letra informada � uma VOGAL";
  }
  else
   	if ((letra =='E') || (letra =='e'))
     {
  	  cout<<"\n\n A letra informada � uma VOGAL";
     }
     else
      
		if ((letra =='I') || (letra =='i'))
          {
  	        cout<<"\n\n A letra informada � uma VOGAL";
          }
       else
       if ((letra =='O') || (letra =='o'))
          {
  	        cout<<"\n\n A letra informada � uma VOGAL";
          }
       else
        if ((letra =='U') || (letra =='u'))
          {
  	        cout<<"\n\n A letra informada � uma VOGAL";
          }
        else
         {
	       cout<<"\n\n Esse caracter N�o � VOGAL";
         }
     
   cout<<"\n\n\n";
} //fecha o bloco
