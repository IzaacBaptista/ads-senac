#include <iostream>
using namespace std;
void altera_matriz (int matriz[5][5]);
int i,j, matriz[5][5];
main()
{
	setlocale(LC_ALL, "Portuguese");
	for (i=0;i<5;i++)
		for(j=0;j<5;j++)
			matriz[i][j] = i+j;
	altera_matriz(matriz);
	cout<<"\n\n Valores da Matriz APÓS chamar a função:  \n";
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		cout<<" - "<<matriz[i][j];
	cout<<"\n\n\n";
}
void altera_matriz(int matriz[5][5])
{
	for(i=0;i<100;i++)
		for(j=0;j<500;j++)
		matriz[i][j] = i+(rand()%37);
}
