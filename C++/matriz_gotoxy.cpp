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
int mat[TAM][TAM],i,j,m,n,col,lin; 
int main()
{
    lin=3;
    cout<<"\n Matriz \n";
    for(i=0;i<TAM;i++)           
     { col=14;
        for (j=0;j<TAM;j++)
        {
          gotoxy(col,lin); 
          cin>>mat[i][j];
          col=col+4;
         } 
       lin=lin+1;
       col=4;    
       
       }
gotoxy(8,20);
 system("PAUSE");
    return 0 ;
}
