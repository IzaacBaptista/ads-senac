#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h> // Para usar o getch();
int op;
char letra;
using namespace std;
main ()
{
setlocale(LC_ALL, "Portuguese");
cout << fixed << setprecision(2);// deixar o float com 2 casas decimais
do{
   system ("CLS"); // limpar a tela
   system ("color 2"); // usar a cor verde
   cout<<"MENU DE EXEMPLO \n";
   cout<<"\n [1]Opção 01";
   cout<<"\n [2]Opção 02";
   cout<<"\n [3]FIM.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
  switch (op)
  {
    case 1:{
             system ("color 2");
             cout<<"\n Opção 01";
             cout<<" \n APERTE UMA TECLA";
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 3");
             cout<<"\n Opção 02";
             cout<<" \n APERTE UMA TECLA";
             getch();
             break;
           }
    case 3:{
             system ("color 8");
             cout<<"\n\n Aperte qualquer tecla para finalizar o programa.\n ";
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU O NUMERO ERRADO.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=3);
cout<<"\n\n\n ";
}
