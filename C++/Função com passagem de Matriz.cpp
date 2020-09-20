#include <iostream>
using namespace std;
void altera_matriz (int matriz[2][2]);
int i,j, matriz[2][2];
main()
{
	setlocale(LC_ALL, "Portuguese");
	for (i=0;i<2;i++)
		for(j=0;j<2;j++)
			matriz[i][j] = i+j;
	cout<<"\n Valores da Matriz:  \n";
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
	cout<<" - "<<matriz[i][j];
	altera_matriz(matriz);
	cout<<"\n\n Valores da Matriz APÓS chamar a função:  \n";
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		cout<<" - "<<matriz[i][j];
	cout<<"\n\n\n";
}
void altera_matriz(int matriz[2][2])
{
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		matriz[i][j] = i+100;
}
