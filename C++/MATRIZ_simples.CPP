#include<iostream>
#include<conio.h>
const int coluna = 4;
const int linha = 4;
int matriz[linha][coluna];
int i,j, col,lin, somalinha,somacol;
using namespace std;
main()
{
 
  cout<<"\n Informe a Matriz: \n\n";

  for (i=0;i<linha; i++)
  {
    for(j=0;j<coluna;j++)
    {
      cin>> matriz[i][j];
     }
   
  }
 // Soma das Linhas
 for(i=0;i<linha;i++)
  {
   for(j=0;j<coluna;j++)
   {
     somacol=somacol+matriz[i][j];
   }
   cout<<"\n A soma das Colunas: "<<i+1<< " ‚ "<<somacol;
   somacol=0;
   }
   // Soma das Colunas

   for (i=0;i<coluna; i++)
   { for (j=0;j<linha;j++)
       somalinha=somalinha + matriz[j][i];
    cout<<"\n A soma das Linhas: "<<i+1<< " ‚ "<<somalinha;
    somalinha=0;
   }



  getch();
  }







