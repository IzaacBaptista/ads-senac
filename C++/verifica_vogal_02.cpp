/* FUP que verifique se a letra informada
é referente ao sexo da pessoa */

#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
using namespace std; // OBRIGATÓRIO
char letra;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n=======================================  "; 
 cout<<" \n\t Verificando se a  Letra é uma VOGAL ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe uma Letra: "; 
 cin>>letra;
 if ((letra =='a') || (letra =='e')||(letra =='i') || (letra =='o') || (letra =='u'))
  {
  	cout<<"\n\n A letra informada é uma VOGAL";
  }
  else
   	if ((letra =='A') || (letra =='E')||(letra =='I') || (letra =='O') || (letra =='U'))
  
     {
  	  cout<<"\n\n A letra informada é uma VOGAL";
     }
     else
     {
	   cout<<"\n\n Esse caracter Não é VOGAL";
       }
     
   cout<<"\n\n\n";
} //fecha o PROGRAMA
