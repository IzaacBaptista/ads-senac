/* Exemplo Switch*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
using namespace std; // OBRIGATÓRIO
char escolha; 

main()
{
 setlocale(LC_ALL, "Portuguese"); // Fru-fru do idioma
 // Entrada dos Dados
 cout<<" \n=========================================  "; 
 cout<<" \n\t\a  PROGRAMA MOSTRANDO O SWITCH  ";
 cout<<" \n=========================================  "; 
 cout<<"\n Escolha uma Opção: ";
 cout<<"\n [a] - Mensagem de Boas Vindas";
 cout<<"\n [b] - Mensagem de Feliz Natal";
 cout<<"\n [c] - Mensagem de Feliz Páscoa";
 cout<<"\n Sua escolha é ?: ";
 cin>>escolha;
 escolha = toupper (escolha); //transforma em maiúsculo
 switch (escolha)
 {
 	case 'A':{
 		       cout<<"\n  Mensagem de Boas Vindas";
 		       cout<<"\n  Oi";
		       break;
	         }
    case 'B':{
 		       cout<<"\n  Mensagem de Feliz Natal";
 		       cout<<"\n  Mas já????";
		       break;
	         }
     case 'C':{
 		       cout<<"\n  Mensagem de Feliz Páscoa";
 		       cout<<"\n  Coelhinho da Páscoa o que trazes pra mim?";
		       break;
	         }	
	default : {
		        cout<<"\n  Escolha Inválida";
		break;
	}		 	         
 }
cout<<"\n\n\n";
 
}

