/* FUP que leia um vetor referente a altura de 10 pessoas. Calcule:
A média das alturas
Mostre a maior altura informada no vetor.
Mostre a menor altura informada no vetor.
*/
#include<iostream>
using namespace std;
int const TAM = 6;
int i,maior, menor;
float alturas[TAM],media=0, acum_alturas=0;
main()
{
  setlocale(LC_ALL, "Portuguese");
  cout<<"\n \tPrograma Vetor ALTURAS: MAIOR e MENOR Altura do Vetor \n";
  for(i=0;i<TAM;i++)
  {
   cout<<"\n Informe a  " <<i+1<<"ª Altura:  ";
   cin>>alturas[i];
   if (i==0)// Funciona somente uma vez e serve para inicializar as variáveis: MAIOR e MENOR
   { maior = alturas[i];
	 menor = alturas[i];
   }
   if (alturas[i] > maior)
   {   maior = alturas[i];
   }
   if (alturas[i]  < menor)
   {	menor = alturas[i];
   }	  
  }// Termina o FOR
  cout<<"\n A menor altura informada foi: "<<menor;
  cout<<"\n A maior altura informada foi: "<<maior;
  cout<<"\n\n\n";
} 
