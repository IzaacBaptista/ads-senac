/* 
Faculdade SENAC - Joinville - SC
Prof�: Cl�udia Werlich
Atividade Avaliativa de Introdu��o a Programa��o de Computadores

InsiraSeu nome completo aqui:

Data: <<vers�o 01 ou vers�o02 ou vers�o_final>> 
(Altere a data conforme a entrega)

*/

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
   system ("cls"); // limpar a tela
   system ("color 2"); // usar a cor verde
   cout<<"ATIVIDADE AVALIATIVA DE INTRODU��O A PROGRAMA��O \n";
   cout<<"INDICADORES: \n";
   cout<<"6. Utiliza as estruturas de repeti��o em algoritmos de acordo com o contexto. \n";
   cout<<"7. Utiliza vetores para solu��o de problemas computacionais em determinado contexto. \n";
   cout<<"\n ====================================================================================";
   cout<<"\n [1]Quest�o 01 - Ser� liberada no dia 05/05/2020";
   cout<<"\n [2]Quest�o 02 - Ser� liberada no dia 05/05/2020";
   cout<<"\n [3]Quest�o 03 - Ser� liberada no dia 05/05/2020";
   cout<<"\n [4]Quest�o 04 - Ser� liberada no dia 06/05/2020";
   cout<<"\n [5]Quest�o 05 - Ser� liberada no dia 06/05/2020";
   cout<<"\n [6]Quest�o 06 - Ser� liberada no dia 06/05/2020";
   cout<<"\n [7]FIM.";
   cout<<"\n\n\n\n ESCOLHA UMA OP��O --> ";
   cin>>op;
  switch (op)
  {
    case 1:{
             system ("color 2");
             cout<<"\n Op��o 01";
             cout<<" \n APERTE UMA TECLA";
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 3");
             cout<<"\n Op��o 02";
             cout<<" \n APERTE UMA TECLA";
             getch();
             break;
           }
    case 7:{
             system ("color 8");
             cout<<"\n\n Insira aqui uma mensagem de despedida.\n ";
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU UMA OP��O ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=3);
cout<<"\n\n\n ";
}
