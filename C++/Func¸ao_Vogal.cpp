#include<iostream>
//PROT�TIPO OU declara��o
int Vogal(char Letra);

using namespace std;
int result;
char letra;
main()
{
      setlocale(LC_ALL, "Portuguese");
	  cout<<"\nDigite uma Letra: ";
      cin>>letra;
      letra=toupper(letra); // TRANSFORMA EM MAI�SCULA
      // CHAMANDO A FUN��O
      result=Vogal(letra);
      if(result ==1 )

      cout<<letra<<"  � vogal";
      
      if(Vogal(letra)==0)
      cout<<letra<<" n�o � vogal";
      
      cout<<"\n=======================";
      cout<<"\n\n\n";
      
}
//==========================
//DESENVOLVIMENTO Fun��o Vogal
//==========================
      int Vogal(char Letra)
      {
      if((Letra=='A')||(Letra=='E')||(Letra=='I')||(Letra=='O')||(Letra=='U'))
        return(1);
      if((Letra!='A')||(Letra!='E')||(Letra!='I')||(Letra!='O')||(Letra!='U'))
        return(0);
      }

