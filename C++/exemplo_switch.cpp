/* Exemplo Switch*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
using namespace std; // OBRIGAT�RIO
char escolha; 

main()
{
 setlocale(LC_ALL, "Portuguese"); // Fru-fru do idioma
 // Entrada dos Dados
 cout<<" \n=========================================  "; 
 cout<<" \n\t\a  PROGRAMA MOSTRANDO O SWITCH  ";
 cout<<" \n=========================================  "; 
 cout<<"\n Escolha uma Op��o: ";
 cout<<"\n [a] - Mensagem de Boas Vindas";
 cout<<"\n [b] - Mensagem de Feliz Natal";
 cout<<"\n [c] - Mensagem de Feliz P�scoa";
 cout<<"\n Sua escolha � ?: ";
 cin>>escolha;
 escolha = toupper (escolha); //transforma em mai�sculo
 switch (escolha)
 {
 	case 'A':{
 		       cout<<"\n  Mensagem de Boas Vindas";
 		       cout<<"\n  Oi";
		       break;
	         }
    case 'B':{
 		       cout<<"\n  Mensagem de Feliz Natal";
 		       cout<<"\n  Mas j�????";
		       break;
	         }
     case 'C':{
 		       cout<<"\n  Mensagem de Feliz P�scoa";
 		       cout<<"\n  Coelhinho da P�scoa o que trazes pra mim?";
		       break;
	         }	
	default : {
		        cout<<"\n  Escolha Inv�lida";
		break;
	}		 	         
 }
cout<<"\n\n\n";
 
}

