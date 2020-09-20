/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o salário e número de filhos. 
Deseja-se saber:  
a) média do salário da população;
b) média do número de filhos da população;
c) maior salário;
d) a quantidade de pessoas participantes na pesquisa

*/
#include <iostream> 
#include <iomanip> 
#include <ctype.h> 
using namespace std; 
int i,participante, sair=0,acum_filhos,qtde_filhos;
float salario=0,acum_salarios ,media_salarios;
float maior_salario,media_filhos;
main()
{
 setlocale(LC_ALL, "Portuguese");
 cout<<" \n=========================================  "; 
 cout<<" \n\t\a  PROGRAMA DA PREFEITURA ";
 cout<<" \n=========================================  ";  
 
 i=1;
 do {
 	cout<<"\n Qual seu salário? [Para SAIR Digite um valor negativo]  ";
    cin>>salario;
    cout<<"\n Quantos filhos vc tem?  ";
    cin>>qtde_filhos;
    cout<<"\n------------------------------------------------";
    i++;
    if(salario>0)
	{
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
 	cout<<"\n A média dos salários ficou em: "<<media_salarios << " reais";
 	cout<<"\n A média de filhos: "<<media_filhos <<"  filhos";
 	cout<<"\n O maior salário é de: "<<maior_salario << " reais";
  	cout<<"\n\n";
}
			

