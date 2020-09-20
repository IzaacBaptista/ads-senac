#include <iostream>
#include "claudia.h"
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();
//Protótipo das Funções -- não precisa porque temos a biblioteca
//retirado está direto na função

//Variáveis Globais
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
   cout<<"EXEMPLO DE FUNÇÃO COM BIBLIOTECA \n";
   cout<<"\n ====================================================================================";
   cout<<"\n [1]Exemplo 01 - Positivo ou Negativo? ";
   cout<<"\n [2]Exemplo 02 - Peso Ideal";
   cout<<"\n [3]Exemplo 03 - É Vogal?";
   cout<<"\n [4]Exemplo 04 - Par ou Ímpar";
   cout<<"\n [5]Exemplo 05 - Vetor de Notas";
   cout<<"\n [6]Exemplo 06 - Em espera...";
   cout<<"\n [7]FIM.";
   cout<<"\n\n\n\n ESCOLHA UMA OPÇÃO --> ";
   cin>>op;
   switch (op)
  {
    case 1:{
             system ("color 2");
             int num,result;
             cout<<"\nInforme um Número: ";
             cin>>num;
             result=posit_negativo(num);
             if (result==1)
               cout<<"\n O número informado é Positivo ";
            else
               cout<<"\n O número informado é Negativo ";
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
	           cout<<"\nVerificando se o caracter é vogal. ";
               cout<<"\nDigite uma Letra: ";
               cin>>letra;
               letra=toupper(letra); // TRANSFORMA EM MAIÚSCULA
               result=Vogal(letra); // CHAMANDO A FUNÇÃO
               if(result ==1 )
                  cout<<letra<<"  é vogal";
               if(Vogal(letra)==0)
                  cout<<letra<<" não é vogal";
              cout<<"\n=======================";
              cout<<"\n\n\n";
              getch();
              break;
          }
      case 4:{
             system ("color 5");
             cout<<"\n\n Par ou Ímpar? \n ";
             int num,result;
             cout<<"\nInforme o 1 numero: ";
             cin>>num;
             result=par_imp(num);//chamada da Função
             if (result==1)
                cout<<"\n O número informado é Par ";
             else
                cout<<"\n O número informado é Ímpar ";
             getch();
             break;
            }
      case 5:{
             system ("color 5");
             cout<<"\n\n Informe  "<< TAM <<" notas \n ";
             float result=0;
             for (int i=0; i<TAM; i++)
                  cin>>notas[i];
                  
             result=Media(notas,TAM);// Passando o Vetor para a Função
             
             cout<<"\n A Média do Vetor de Notas é:  "<<result;
             getch();
             break;
            } 
      //Insira outros cases aqui  

    case 7:{
             system ("color 8");
             cout<<"\n\n CLAWER Inc Agradece a Preferência! \n ";
             getch();
             break;
            }
   default: {
               cout<<"\n INFORMOU UMA OPÇÃO ERRADA.";
               getch();
               break;
            }
 }// fecha o SWITCH
} while(op!=7); //Se houver mais opções, altere o valor
cout<<"\n\n\n ";
}
//====== FIM DO PROGRAMA=========


