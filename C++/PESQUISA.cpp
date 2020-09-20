//FUP que leia a quantidade de pessoas que participaram da pesquisa. 
//Após para cada pessoa peça a nota que tirou na última prova de Matemática. 
//Após imprima:
//a)A Média de todas as notas;
//b)A quantidade de pessoas que tiram nota acima de 8.
//c)A quantidade de pessoas que tiraram nota abaixo de 5.
//d)Imprima também a quantidade de pessoas que participaram da pesquisa.
#include <iostream>
#include <iomanip>
using namespace std;
int i, totalPessoas, nota, notas, mediaNotas, acimaMedia, cont, sub;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	cout<<" \n =======================================  ";
	cout<<" \n\t  PROGRAMA PESQUISA COM ESTUDANTES ";
	cout<<" \n =======================================  ";
	cout<<" \n\n Informe a quantidade de alunos que participaram da pesquisa ";
	cin>>totalPessoas;
	cout<<"\n\n Informe a nota que cada estudante tirou na ultima prova de matemática \n ";
	for (i=1;i<=totalPessoas;i++)
	{
		cout<<"\n Nota da " <<i<<"a Pessoa: ";
		cin>>nota;
		if (nota > 8){
			cont++;}
		if (nota < 5){
			sub++;
		}
		notas = notas + nota;
	}
	mediaNotas = notas/totalPessoas;
	cout<<"\n\n A media de todas as notas é: "<<mediaNotas;
	cout<<"\n\n A quantidade de alunos que tirou nota acima de 8 é: "<<cont;
	cout<<"\n\n A quantidade de alunos que tirou nota abaixo de 5 é: "<<sub;
	cout<<"\n\n A quantidade de alunos que participaram da pesquisa foi de: "<<totalPessoas;
	cout<<"\n\n\n";
}
