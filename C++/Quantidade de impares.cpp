/* Exemplo USO DO FOR
Contando os números ÍMPARES de Zero até 100
BY  Cláudia Werlich 2020_01
*/
#include <iostream> 
#include <iomanip> 
using namespace std; 
int i, cont; // cont é um contador 
main()
{
 setlocale(LC_ALL, "Portuguese"); 
 cout<<" \n=========================================  "; 
 cout<<" \n\t  PROGRAMA Qtos ÍMPARES DE 0 a 380  ";
 cout<<" \n=========================================  \n"; 
 for(i=0;i<=380;i++)
 {
  if (i%2!=0)
   cont++;  //ou cont = cont + 1;
 }
 //IMPRIMIR FORA DO FOR
 cout<< "\n Existem: "<< cont<< " números ímpares entre 0 e 380";
 cout<<"\n\n\n";
}

