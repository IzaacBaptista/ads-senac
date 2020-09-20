#include <iostream>
#include "claudia.h"
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();
//Prot�tipo das Fun��es -- n�o precisa porque temos a biblioteca
//retirado est� direto na fun��o

//Vari�veis Globais
int const TAM = 6;
float notas[TAM];
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
   cout<<"EXEMPLO DE FUN��O COM BIBLIOTECA \n";
   cout<<"\n ====================================================================================";
   cout<<"\n [1]Exemplo 01 - Positivo ou Negativo? ";
   cout<<"\n [2]Exemplo 02 - Peso Ideal";
   cout<<"\n [3]Exemplo 03 - � Vogal?";
   cout<<"\n [4]Exemplo 04 - Par ou �mpar";
   cout<<"\n [5]Exemplo 05 - Vetor de Notas";
   cout<<"\n [6]Exemplo 06 - Em espera...";
   cout<<"\n [7]FIM.";
   cout<<"\n\n\n\n ESCOLHA UMA OP��O --> ";
   cin>>op;
   switch (op)
  {
    case 1:{
             system ("color 2");
             int num,result;
             cout<<"\nInforme um N�mero: ";
             cin>>num;
             result=posit_negativo(num);
             if (result==1)
               cout<<"\n O n�mero informado � Positivo ";
            else
               cout<<"\n O n�mero informado � Negativo ";
             cout<<"\n\n=================================";
             cout<<"\n\n\n";
             getch(); // espera digitar algo
             break;
           }
    case 2:{
             system ("color 3");
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
             getch();
             break;
           }
           
      case 3:{ system ("color 3"); 
               int result;
	           cout<<"\nVerificando se o caracter � vogal. ";
               cout<<"\nDigite uma Letra: ";
               cin>>letra;
               letra=toupper(letra); // TRANSFORMA EM MAI�SCULA
               result=Vogal(letra); // CHAMANDO A FUN��O
               if(result ==1 )
                  cout<<letra<<"  � vogal";
               if(Vogal(letra)==0)
                  cout<<letra<<" n�o � vogal";
              cout<<"\n=======================";
              cout<<"\n\n\n";
              getch();
              break;
          }
      case 4:{
             system ("color 5");
             cout<<"\n\n Par ou �mpar? \n ";
             int num,result;
             cout<<"\nInforme o 1 numero: ";
             cin>>num;
             result=par_imp(num);//chamada da Fun��o
             if (result==1)
                cout<<"\n O n�mero informado � Par ";
             else
                cout<<"\n O n�mero informado � �mpar ";
             getch();
             break;
            }
      case 5:{
             system ("color 5");
             cout<<"\n\n Informe  "<< TAM <<" notas \n ";
             float result=0;
             for (int i=0; i<TAM; i++)
                  cin>>notas[i];
                  
             result=Media(notas,TAM);// Passando o Vetor para a Fun��o
             
             cout<<"\n A M�dia do Vetor de Notas �:  "<<result;
             getch();
             break;
            } 
      //Insira outros cases aqui  

    case 7:{
             system ("color 8");
             cout<<"\n\n CLAWER Inc Agradece a Prefer�ncia! \n ";
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU UMA OP��O ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=7); //Se houver mais op��es, altere o valor
cout<<"\n\n\n ";
}
//====== FIM DO PROGRAMA=========


