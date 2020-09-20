#include<iostream>
float peso(float altura,char sexo);
using namespace std;
main()
{
      setlocale(LC_ALL, "Portuguese");
	  float altura, result;
      char sexo;
      cout<<"\nDigite sua altura:   ";
      cin>>altura;
      cout<<"\nInforme [M]- Masculino ou [F]- Feminino:   ";
      cin>>sexo;
      sexo=toupper(sexo);
      result=peso(altura,sexo);
      cout<<"\nSeu Peso ideal deve ser:  "<<result;
      cout<<"\n=======================";
      cout<<"\n\n\n";
      
}
//===================
//função peso
//===================
  float peso(float altura,char sexo)
      {
      float resultado;
      if(sexo=='F')
          resultado=((62.1*altura)-44.7);
      if(sexo=='M')
         resultado=((72.7*altura)-58);
      return(resultado);
      }
