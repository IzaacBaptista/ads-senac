/* Exemplo USO DO FOR
Contando os n�meros �MPARES de Zero at� 100
BY  Cl�udia Werlich 2020_01
*/
#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, idade, acumula;
float media;
main()
{
 setlocale(LC_ALL, "Portuguese"); 
 cout<<" \n=========================================  "; 
 cout<<" \n\t  PROGRAMA M�DIA DE IDADES   ";
 cout<<" \n=========================================  \n"; 
 cout<<" \n\n Informe a idade de 5 Pessoas  "; 
 for(i=1;i<=5;i++)
 {
  cout<<"\n Informe a Idade da " <<i<<"a  Pessoa: ";
  cin>>idade;
  acumula= acumula + idade;
 }
  media= acumula/5;
  cout<< "\n A m�dia das idades � "<<media;
  cout<<"\n\n\n";
}

