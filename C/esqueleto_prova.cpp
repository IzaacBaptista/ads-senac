/* 
Faculdade SENAC - Joinville - SC
Profª: Cláudia Werlich
Atividade Avaliativa de Introdução a Programação de Computadores

InsiraSeu nome completo aqui:

Data: <<versão 01 ou versão02 ou versão_final>> 
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
   cout<<"ATIVIDADE AVALIATIVA DE INTRODUÇÃO A PROGRAMAÇÃO \n";
   cout<<"INDICADORES: \n";
   cout<<"6. Utiliza as estruturas de repetição em algoritmos de acordo com o contexto. \n";
   cout<<"7. Utiliza vetores para solução de problemas computacionais em determinado contexto. \n";
   cout<<"\n ====================================================================================";
   cout<<"\n [1]Questão 01 - Será liberada no dia 05/05/2020";
   cout<<"\n [2]Questão 02 - Será liberada no dia 05/05/2020";
   cout<<"\n [3]Questão 03 - Será liberada no dia 05/05/2020";
   cout<<"\n [4]Questão 04 - Será liberada no dia 06/05/2020";
   cout<<"\n [5]Questão 05 - Será liberada no dia 06/05/2020";
   cout<<"\n [6]Questão 06 - Será liberada no dia 06/05/2020";
   cout<<"\n [7]FIM.";
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
    case 7:{
             system ("color 8");
             cout<<"\n\n Insira aqui uma mensagem de despedida.\n ";
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=3);
cout<<"\n\n\n ";
}
