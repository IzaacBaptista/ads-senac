/* Testando a Letra com Switch*/
#include <iostream> // BIBLIOTECA PADRAO C++
#include <iomanip> // PARA O setlocale
#include <ctype.h> // para usar o toupper
using namespace std; // OBRIGAT�RIO
char letra; 

main()
{
 setlocale(LC_ALL, "Portuguese"); // Fru-fru do idioma
 // Entrada dos Dados
 cout<<" \n===========================================  "; 
 cout<<" \n\t  PROGRAMA VERIFICA VOGAL COM O SWITCH  ";
 cout<<" \n===========================================  "; 
 cout<<"\n\n Informe uma Letra e verifique se � uma VOGAL ";
 cin>>letra;
 letra = toupper (letra); //transforma em mai�sculo
 switch (letra)
 {
 	case 'A':{
 		       cout<<"\n Essa letra � uma VOGAL";
 		       break;
	         }
    case 'E':{
 		       cout<<"\n Essa letra � uma VOGAL";
		       break;
	         }
     case 'I':{
     	       cout<<"\n Essa letra � uma VOGAL";
 		       break;
	         }
    case 'O':{
 		       cout<<"\n Essa letra � uma VOGAL";
		       break;
	         }
     case 'U':{
     	       cout<<"\n Essa letra � uma VOGAL";
 		       break;
	         }		
	default : {
		        cout<<"\n  O QUE FOI DIGITADO N�O � VOGAL";
		break;
	}		 	         
 }
cout<<"\n\n\n";
 
}

