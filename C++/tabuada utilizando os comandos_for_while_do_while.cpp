//Fa�a um programa que imprima todos os n�meros de 0 at� 200, 
//mas pulando de 5 em 5. Utilize o comando WHILE
#include <iostream> 
#include <iomanip> 
#include <ctype.h> 
using namespace std; 
int escolha,num, i; 
int main()
{
 setlocale(LC_ALL, "Portuguese"); 

 cout<<" \n=========================================  "; 
 cout<<" \n\t\  PROGRAMA TABUADA COM FOR - WHILE E DO_WHILE  ";
 cout<<" \n=========================================  ";
 cout<<"\n Informe um n�mero: \n ";
 cin>>num;
 cout<<"\n Escolha uma Op��o: ";
 cout<<"\n [1] - Tabuada com FOR";
 cout<<"\n [2] - Tabuada com WHILE";
 cout<<"\n [3] - Tabuada com DO_WHILE";
 cout<<"\n Sua escolha � ?: ";
 cin>>escolha;
 switch (escolha)
 {
 	case 1:{
 			for (i=0;i<=10;i++)	{
			cout<<"\n "<<num<<" * "<<i<<" = "<<num * i;
			}
			break;
 		}
    case 2:{
 		     i=0;
			while(i<=10){
			cout<<num<<"*"<<i<<"="<<i*num<<"\n";
			i++;
			} 
			break;
	    }
    case 3:{ 
	    	i=0;
			do{
			cout<<num<<"*"<<i<<"="<<i*num<<"\n";
			i++;
			} while(i<=10);
			break;
		}	
	default : {
		        cout<<"\n  Escolha Inv�lida";
		break;
	}		 	         
 }
cout<<"\n\n\n";
 
}

