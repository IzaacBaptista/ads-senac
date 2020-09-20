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
 cout<<" \n\t Verificando a Letra ";
 cout<<" \n=======================================  "; 
 cout<<"\n\n\n Informe uma Letra: "; 
 cin>>letra;
 if ((letra =='m') || (letra =='M'))
  {
  	cout<<"\n\n Você é do Sexo MASCULINO";
  }
  else
  {
  	if ((letra =='f') || (letra =='F'))
     {
   	   cout<<"\n\n Você é do Sexo FEMININO";
     }
     else
       cout<<"\n\n Caracter Inválido";
  }
   cout<<"\n\n\n";
} //fecha o bloco
