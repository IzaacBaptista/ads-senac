/* Exemplo Switch*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
using namespace std; // OBRIGAT�RIO
int escolha,num; 
char letra, sexo;
float altura,resultado;
main()
{
 setlocale(LC_ALL, "Portuguese"); // Fru-fru do idioma
 // Entrada dos Dados
 cout<<" \n=========================================  "; 
 cout<<" \n\t\a  PROGRAMA USANDO O SWITCH  ";
 cout<<" \n=========================================  "; 
 cout<<"\n Escolha uma Op��o: ";
 cout<<"\n [1] - Testando a Letra - Vogal?";
 cout<<"\n [2] - Testando se � PAR ou �MPAR";
 cout<<"\n [3] - Tabuada de um N�mero";
 cout<<"\n [4] - Feminino ou Masculino?";
 cout<<"\n [5] - Peso Ideal";
 cout<<"\n [9] - FIM";
 cout<<"\n Sua escolha � ?: ";
 cin>>escolha;
 switch (escolha)
 {
 	case 1:{
 		      cout<<"\n Informe um Caracter:  ";       
              cin>>letra;
              letra=toupper(letra);
              if ((letra=='A')||(letra=='E')||(letra=='I')
                  ||(letra=='O')||(letra=='U'))
                {
   	              cout<<" \n O Caracter informado � VOGAL";
                }
              else
                  cout<<" \n O Caracter informado N�O � VOGAL";
	         break;
	         }
    case 2:{
 		     cout<<"\n Digite um n�mero e veja se � PAR ou �MPAR: ";
             cin>>num;
             if(num%2==0)
                 {
                 cout<<"\n Par ";
                 }
                 else
                 {
                   cout<<"\n Impar";
                 }
		       break;
	         }
     case 3:{ cout<<"\n\TABUADA  "; // EXEMPLO NDA OTIMIZADO
     	      cout<<"\n\nInforme um n�mero: "; // IMPRIME NA TELA
              cin>>num;
              cout<<"\n "<<num<<"  * 0 = "<<num*0;
              cout<<"\n "<<num<<"  * 1 = "<<num*1;
              cout<<"\n "<<num<<"  * 2 = "<<num*2;
              cout<<"\n "<<num<<"  * 3 = "<<num*3;
              cout<<"\n "<<num<<"  * 4 = "<<num*4;
              cout<<"\n "<<num<<"  * 5 = "<<num*5;
              cout<<"\n "<<num<<"  * 6 = "<<num*6;
              cout<<"\n "<<num<<"  * 7 = "<<num*7;
              cout<<"\n "<<num<<"  * 8 = "<<num*8;
              cout<<"\n "<<num<<"  * 9 = "<<num*9;
              cout<<"\n "<<num<<"  * 10 = "<<num*10;
 		     break;
	         }	
	case 4:{
 		     cout<<"\n\n\n Informe uma Letra: "; 
             cin>>letra;
             letra = toupper (letra); //transforma em mai�sculo
             if  (letra =='M')
             {
  	            cout<<"\n\n Voc� � do Sexo MASCULINO";
             }
             else
             {
  	           if  (letra =='F')
                  {
   	                cout<<"\n\n Voc� � do Sexo FEMININO";
                  }
               else
                 cout<<"\n\n Caracter Inv�lido";
              }
		       break;
	         }
     case 5:{ cout<<"\n\n Informe uma letra para o Sexo:  ";
              cin>>sexo;  
              sexo=toupper (sexo); //TRANSFORMA EM MAIUSCULO
              cout<<"\n Informe sua Altura:  ";
              cin>>altura;
              if (sexo=='M') 
              {
                resultado = (72.7 * altura ) - 58;
                cout<<"\n Seu peso ideal �: " << resultado << "  quilos";
              } 
              if (sexo=='F')
              {
                resultado = (62.1 * altura ) - 44.7;
                cout<<"\n Seu peso ideal �: " << resultado< "  quilos";
            }
 		       break;
	         }
	case 9:{
 		       cout<<"\n  OBRIGADA POR USAR O PROGRAMA";
 		       cout<<"\n  BOA NOITE";
		       break;
	         }		 	
	default : {
		        cout<<"\n  Escolha Inv�lida";
		break;
	}		 	         
 }
cout<<"\n\n\n";
 
}

