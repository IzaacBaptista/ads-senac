/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o sal�rio e n�mero de filhos. 
Deseja-se saber:  
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos da popula��o;
c) maior sal�rio;
d) a quantidade de pessoas participantes na pesquisa

*/
#include <iostream> 
#include <iomanip> 
#include <ctype.h> 
using namespace std; 
int i,participante=0, sair=0,acum_filhos=0,qtde_filhos=0;
float salario,acum_salarios=0,media_salarios=0;
float maior_salario=0,media_filhos=0;
main()
{
 setlocale(LC_ALL, "Portuguese");
 cout<<" \n=========================================  "; 
 cout<<" \n\t\a  PROGRAMA DA PREFEITURA ";
 cout<<" \n=========================================  ";  
 
 i=1;
 do {
 	cout<<"\n Qual seu sal�rio? [Para SAIR Digite um valor negativo]  ";
    cin>>salario;
    if (salario<0)
    { 
     sair++;
     if (sair==1)
       break;
    }
    do{
       cout<<"\n Quantos filhos vc tem?  ";
       cin>>qtde_filhos;
       if ((qtde_filhos<0)||(qtde_filhos>145))
       { cout << "\n\n ATEN��O QUANTIDADE INV�LIDA";
         cout << "\n\n Digite a quantidade de filhos novamente: ";
         cin >> qtde_filhos; 
       }
    } while ((qtde_filhos<0) || (qtde_filhos>145));
    cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++";
    i++;
    if(salario>0){
    acum_salarios=acum_salarios+salario;
    acum_filhos=acum_filhos+qtde_filhos;
 	participante++;
 	}
	if (salario>maior_salario)
	    {
	    maior_salario=salario;
	    }
	}while(salario>0);
	media_salarios=acum_salarios/participante;
 	media_filhos=acum_filhos/participante;
 	cout<<"\n\n ============================================";
 	cout<<"\n\n RESULTADOS DA PESQUISA ";
 	cout<<"\n\n ============================================";
 	cout << fixed << setprecision(2);
 	cout<<"\n Participaram da Pesquisa "<<participante<< " pessoas";
 	cout<<"\n A m�dia dos sal�rios ficou em: "<<media_salarios << " reais";
 	cout<<"\n A m�dia de filhos: "<<media_filhos <<"  filhos";
 	cout<<"\n O maior sal�rio � de: "<<maior_salario << " reais";
  	cout<<"\n\n";
}
			

