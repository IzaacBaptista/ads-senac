 #include <cstdlib>
#include <iostream>

using namespace std;
/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo*/
int main(int argc, char *argv[])
{
float s,ms = 0 ,habi = 0 ,somasal = 0,maiorsa = 0,salcem = 0,percentual = 0; //variáveis do tipo real, sendo que algumas variáveis tem valores iniciais=0
int fls,tf = 0 ,mefi = 0;//variáveis do tipo inteiro sendo que algumas variávei tem valor=0 

do//estrutura de repetição, que terminara com uma condição
{  
printf("Informe o salario: R$ "); //usuário informará salario
scanf("%f",&s); //o salario será lido
 
habi += 1; //variável guarda numero de habitantes
somasal = s + somasal; //variável guarda valor total do salarios
ms = somasal / habi; //variável calcula media dos salarios dos habitantes
 
if ( maiorsa < s ) //estrutura condicional que avalia se a variável "maior salario" é menor que o slario informado
{ 
maiorsa = s; //se verdadeira, o salario é armazenado na variável
}  
if (s <= 100)// estrutura condicional que avalia se salario é maior ou igual a100 
{ 
salcem = s; //variável armazena valor
percentual = (salcem * 100) / habi; //calcula-se o percentual de habitantes com salario ate $100
} 
//Media do numero de filhos// 
printf("Informe a quantidade de filhos: "); //usuário informa a quantidade de filhos
scanf("%d",&fls); //lê-se a quantidade informada

tf = fls + tf; //armazena-se total de filhos em variável
mefi = tf / habi ; //calcula-se media de filhos da população
} 
while ( s > -100 ); //condição que encerra o loop

printf("\n\nA media dos salarios e de : R$ %.2f\n",ms); //mostra-se em tela media dos slarios
printf("\nMedia do numero de filhos: %d\n",mefi); //mostra-se em tela media de filhos
printf("\nO maior salario e': R$ %.2f \n", maiorsa); //mostra-se em tela maior salario
printf("\nPercentual de pessoas com salarios ate R$100.00: %.0f %%\n", percentual); //mostra-se em tela percentual de salarios de ate $100

    system("PAUSE");
    
    return EXIT_SUCCESS;
}
 
