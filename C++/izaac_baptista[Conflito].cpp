/* 
Faculdade SENAC - Joinville - SC
Prof�: Cl�udia Werlich
Atividade Avaliativa de Introdu��o a Programa��o de Computadores

InsiraSeu nome completo aqui: Izaac Elias Baptista

Data: <<vers�o 01 ou vers�o02 ou vers�o_final>> 
(Altere a data conforme a entrega)

*/
#include <string.h>
#include <iostream>
#include <stdlib.h> 
#include <iomanip>
#include <conio.h> // Para usar o getch();
int const TAM=10, ALL=10, palavra=20;
int op, pesos[TAM], i, mais_pesados=0, menos_pesados=0, notas[ALL], vogal, par, impar, num, tabuada;
float media=0, acumula_pesos=0, menor_peso, maior_peso, acumula_notas=0, menor_nota, maior_nota; 
char s [50];
int cont = 0;

using namespace std;
int main ()
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
   cout<<"\n [1]Quest�o 01 - Vetor de vogais ";
   cout<<"\n [2]Quest�o 02 - Vetor de pesos";
   cout<<"\n [3]Quest�o 03 - Vetor de notas";
   cout<<"\n [4]Quest�o 04 - Vetor de temperaturas";
   cout<<"\n [5]Quest�o 05 - Vetor de 10 n�meros";
   cout<<"\n [6]Quest�o 06 - Vetor de 4 n�meros";
   cout<<"\n [7]FIM.";
   cout<<"\n\n\n\n ESCOLHA UMA OP��O --> ";
   cin>>op;
  switch (op)
  {
    case 1:{
             system ("color 5");
             cout<<"\n Op��o 01";
             cout<<" \n INSIRA UMA PALAVRA PARA VERIFICAR QUANTAS VOGAIS EXISTEM NELA \n";
             //getch); // espera digitar algo
             gets(s);
             for (i=0; s[i]!='\0'; i++) {

    			if (s[i]=='a' || s[i]== 'e' || s[i]==' i' || s[i]=='o' || s[i]== 'u' ||
	    			s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||  s[i]=='U')	{             
		
					cont++;         
				}     
			}     
			
			cout<<"\nForam encontrados %d vogal(ais).", cont);      
	
			return 0;
					  	 			
             break;
           }
    case 2:{
             system ("color 3");
             cout<<"\n Op��o 02";
             cout<<"\n Informe "<<TAM<<" pesos diferentes. \n";
			  for(i=0;i<TAM;i++)
			  {
			    cout<<"\n Informe o "<<i+1<<"� peso: ";
			    cin>>pesos[i];
					if (i == 0){ 
			            maior_peso = pesos[i];
			        }
			        if (pesos[i] < menor_peso){
			            menor_peso = pesos[i];
			        }
			        if (pesos[i] > maior_peso){
			            maior_peso = pesos[i];
			        }
			        acumula_pesos = acumula_pesos+pesos[i];
			    }
			  		media= acumula_pesos/TAM;
			  
			   for(i=0;i<TAM;i++)
			   {
			        if(pesos[i]<media)
			            menos_pesados++; 
			        if(pesos[i]>media)
			            mais_pesados++; 
				}
			  
			   cout<<"\n\n A m�dia dos pesos �: "<< media;
			   cout<<"\n\n H� "<< menos_pesados<<" pesos abaixo da m�dia dos pesos";
			   cout<<"\n\n H� "<< mais_pesados<<" pesos acima da m�dia dos pesos";
			   cout<<"\n\n O Maior peso informado �: "<<maior_peso;
			   cout<<"\n\n O Menor peso informado �: "<<menor_peso;
             
           }
    case 3:{
             system ("color 8");
             cout<<"\n Op��o 03";
             cout<<"\n Informe "<<ALL<<" notas diferentes. \n ";
           		 for(i=0;i<ALL;i++)
			  	{
			    cout<<"\n Informe a "<<i+1<<"� nota: ";
			    cin>>notas[i];
			    	if (i < 0 || i > 10) {
			    		cout<<"\n Insira uma nota v�lida";
					}
					if (i == 0){ 
			            maior_nota = notas[i];
			        }
			       
			        acumula_notas = acumula_notas+notas[i];
			    }
			  		media= acumula_notas/ALL;
			  	  	
			  	  	
			   cout<<"\n\n A m�dia das notas �: "<< media;
			   cout<<"\n\n ";
             break;
            }
    case 4:{
    	
		break;
			}
	case 5:{
		  cout<<"\n\n Informe 10 N�meros ";
		  cin>>num;
		  for(i=0;i<num;i++)
		    if (num[i] >=0){
		       par++;
		    else
		       impar++;
		    }
		  cout<<"\n\n A quantidade de N�meros Pares �:  "<<par;
		  cout<<"\n\n A quantidade de N�meros �mpares �:  "<<impar;
		  cout<<"\n\n\n";
		break;
			}
	case 6: {
		cout<<"\n Informe um n�mero para a tabuada \n";
		cin>>tabuada;
		i=0;
		do{
		cout<<tabuada<<"*"<<i<<"="<<i*tabuada<<"\n";
		i++;
	} while(i<=10);
		cout<<"\n\n\n";
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
