/* FUP que verifique se a letra informada
� referente ao sexo da pessoa */

#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
using namespace std; // OBRIGAT�RIO
char letra;
main()
{//inicio do bloco
 setlocale(LC_ALL, "Portuguese"); 
 //tela Inicial:
 cout<<" \n=======================================  "; 
 cout<<" \n\t Verificando a Letra ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe uma Letra: "; 
 cin>>letra;
 if ((letra =='m') || (letra =='M'))
  {
  	cout<<"\n\n Voc� � do Sexo MASCULINO";
  }
  else
  {
  	if ((letra =='f') || (letra =='F'))
     {
   	   cout<<"\n\n Voc� � do Sexo FEMININO";
     }
     else
       cout<<"\n\n Caracter Inv�lido";
  }
   cout<<"\n\n\n";
} //fecha o bloco
