#include<iostream>
//PROTÓTIPO OU declaração
int Vogal(char Letra);

using namespace std;
int result;
char letra;
main()
{
      setlocale(LC_ALL, "Portuguese");
	  cout<<"\nDigite uma Letra: ";
      cin>>letra;
      letra=toupper(letra); // TRANSFORMA EM MAIÚSCULA
      // CHAMANDO A FUNÇÃO
      result=Vogal(letra);
      if(result ==1 )

      cout<<letra<<"  é vogal";
      
      if(Vogal(letra)==0)
      cout<<letra<<" não é vogal";
      
      cout<<"\n=======================";
      cout<<"\n\n\n";
      
}
//==========================
//DESENVOLVIMENTO Função Vogal
//==========================
      int Vogal(char Letra)
      {
      if((Letra=='A')||(Letra=='E')||(Letra=='I')||(Letra=='O')||(Letra=='U'))
        return(1);
      if((Letra!='A')||(Letra!='E')||(Letra!='I')||(Letra!='O')||(Letra!='U'))
        return(0);
      }

