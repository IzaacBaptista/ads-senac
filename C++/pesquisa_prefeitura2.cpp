 #include <cstdlib>
#include <iostream>

using namespace std;
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber:
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at� R$100,00.
O final da leitura de dados se dar� com a entrada de um sal�rio negativo*/
int main(int argc, char *argv[])
{
float s,ms = 0 ,habi = 0 ,somasal = 0,maiorsa = 0,salcem = 0,percentual = 0; //vari�veis do tipo real, sendo que algumas vari�veis tem valores iniciais=0
int fls,tf = 0 ,mefi = 0;//vari�veis do tipo inteiro sendo que algumas vari�vei tem valor=0 

do//estrutura de repeti��o, que terminara com uma condi��o
{  
printf("Informe o salario: R$ "); //usu�rio informar� salario
scanf("%f",&s); //o salario ser� lido
 
habi += 1; //vari�vel guarda numero de habitantes
somasal = s + somasal; //vari�vel guarda valor total do salarios
ms = somasal / habi; //vari�vel calcula media dos salarios dos habitantes
 
if ( maiorsa < s ) //estrutura condicional que avalia se a vari�vel "maior salario" � menor que o slario informado
{ 
maiorsa = s; //se verdadeira, o salario � armazenado na vari�vel
}  
if (s <= 100)// estrutura condicional que avalia se salario � maior ou igual a100 
{ 
salcem = s; //vari�vel armazena valor
percentual = (salcem * 100) / habi; //calcula-se o percentual de habitantes com salario ate $100
} 
//Media do numero de filhos// 
printf("Informe a quantidade de filhos: "); //usu�rio informa a quantidade de filhos
scanf("%d",&fls); //l�-se a quantidade informada

tf = fls + tf; //armazena-se total de filhos em vari�vel
mefi = tf / habi ; //calcula-se media de filhos da popula��o
} 
while ( s > -100 ); //condi��o que encerra o loop

printf("\n\nA media dos salarios e de : R$ %.2f\n",ms); //mostra-se em tela media dos slarios
printf("\nMedia do numero de filhos: %d\n",mefi); //mostra-se em tela media de filhos
printf("\nO maior salario e': R$ %.2f \n", maiorsa); //mostra-se em tela maior salario
printf("\nPercentual de pessoas com salarios ate R$100.00: %.0f %%\n", percentual); //mostra-se em tela percentual de salarios de ate $100

    system("PAUSE");
    
    return EXIT_SUCCESS;
}
 
