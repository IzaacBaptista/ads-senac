#include <windows.h>
#include <iostream>
using namespace std;

//função para fazer funcionar o gotoxy
void gotoxy(int x, int y)
{
HANDLE hOut;
COORD Position;
hOut = GetStdHandle(STD_OUTPUT_HANDLE);
Position.X = x;
Position.Y = y;
SetConsoleCursorPosition(hOut,Position);
}



int const TAM = 3;
int matriz1[TAM][TAM],matriz2[TAM][TAM],soma[TAM][TAM];
int i,j,m,n,col,lin; 

int main()
{
	setlocale(LC_ALL, "Portuguese");
    lin=5;
    gotoxy(8,3);
    cout<<" 1ª Matriz ";
    for(i=0;i<TAM;i++)           
     { col=10;
        for (j=0;j<TAM;j++)
        {
          gotoxy(col,lin); 
          cin>>matriz1[i][j];
          col=col+3;
         } 
       lin=lin+1;
       col=10;    
       
       }
    
	gotoxy(21,6);
	cout<<" +";
	
	lin=5;
    gotoxy(27,3);
    cout<<" 2ª Matriz ";
    for(i=0;i<TAM;i++)           
     { col=28;
        for (j=0;j<TAM;j++)
        {
          gotoxy(col,lin); 
          cin>>matriz2[i][j];
          col=col+3;
         } 
       lin=lin+1;
       col=28;    
      }   
    gotoxy(40,6);
	cout<<" ="; 
	
	  
    lin=5;
    gotoxy(45,3);
    cout<<" Soma das Matrizes ";
    for(i=0;i<TAM;i++)           
     { col=48;
        for (j=0;j<TAM;j++)
        {
          gotoxy(col,lin); 
          soma[i][j]=matriz1[i][j] + matriz2[i][j];
          cout<< soma[i][j];
          col=col+3;
         } 
       lin=lin+1;
       col=28;    
      }    
       
gotoxy(8,20);
 system("PAUSE");

}
