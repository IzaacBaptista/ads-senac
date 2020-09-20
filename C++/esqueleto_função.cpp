#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();
//Protótipo das Funções
int posit_negativo (int num);// Positivo ou Negativo
float peso(float altura,char sexo); // Peso Ideal
int Vogal(char Letra); // Verifica se a letra é vogal
int par_imp(int num1); // Par ou ímpar?
float Media(float notas[]); //Média das Notas

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
   cout<<"EXEMPLO DE SWITCH COM FUNÇÃO \n";
   cout<<"\n ====================================================================================";
   cout<<"\n [1]Exemplo 01 - Positivo ou Negativo? ";
   cout<<"\n [2]Exemplo 02 - Peso Ideal";
   cout<<"\n [3]Exemplo 03 - É Vogal?";
   cout<<"\n [4]Exemplo 04 - Par ou Ímpar";
   cout<<"\n [5]Exemplo 05 - Vetor de Notas";
   cout<<"\n [6]Exemplo 06 - ";
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
             result=posit_negativo(num); //Chamada da Função
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
             result=peso(altura,sexo); //Chamada da Função 
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
             result=Media(notas);// Passando o Vetor para a Função
             cout<<"\n A Média do Vetor de Notas é:  "<<result;
             getch();
             break;
            } 
	// Insira outras cases aqui     
      case 7:{ // Para Sair do Programa
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
}// Chave que fecha o programa principal

//====== FIM DO PROGRAMA=========

// FUNÇÃO POSITIVO OU NEGATIVO     
int posit_negativo (int num)
      {
      	if (num>= 0)
      	  return(1); //Positivos
      	else
      	  return(0); //Negativos
      }

//===================
//função PESO
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
      
//===================
//função VOGAL
//===================
int Vogal(char Letra)
 {
      if((Letra=='A')||(Letra=='E')||(Letra=='I')||(Letra=='O')||(Letra=='U'))
        return(1);
      if((Letra!='A')||(Letra!='E')||(Letra!='I')||(Letra!='O')||(Letra!='U'))
        return(0);
 }
 
//=======================
//função PAR ou ÍMPAR
//=======================      
int par_imp(int num1)
 {  if(num1%2==0)
       return(1); 
    else
       return(0); //ÍMPAR
 }     

//==============================
//função Média do Vetor de Notas
//==============================
float Media(float notas[])
 {
      float acumula, med=0;
      for(int i=0;i<TAM;i++)
      { acumula=acumula+notas[i];
      }
      med=acumula/TAM;
      return(med);
}      
