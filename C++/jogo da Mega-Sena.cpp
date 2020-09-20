#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main();
void mostrar_num();
void ordenar_num();
void sorteio();
void ordernar_sort();
void mostrar_sort();
void result();
void menu_final();


int i, num[15], sort[6], j, aux;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    int igual;
    
    cout<< "\n\n--------------------\n";
    cout << "----- MEGA SENA ----\n";
    cout << "--------------------\n\n";
    
    cout<<"\n Veja os valores das apostas";
	cout<<"\n\n 6 números ------------------------- R$ 4,50";
	cout<<"\n\n 7 números ------------------------- R$ 31,50";
	cout<<"\n\n 8 números ------------------------- R$ 126,00";
	cout<<"\n\n 9 números ------------------------- R$ 378,00";
	cout<<"\n\n 10 números ------------------------ R$ 945,00";
	cout<<"\n\n 11 números ------------------------ R$ 2.079,00";
	cout<<"\n\n 12 números ------------------------ R$ 4.158,00";
	cout<<"\n\n 13 números ------------------------ R$ 7.722,00";
	cout<<"\n\n 14 números ------------------------ R$ 13.513,50";
	cout<<"\n\n 15 números ------------------------ R$ 22.522,50";
    cout<<"\n\n Quantos números você deseja apostar: ?\t";
	cin>>num[i];
    
    do
    {
          for (i=0,j=1;i<6;i++,j++)
          {
              cout << "\n";
              do
              {
              	   cout << "Digite o " << j << " numero: ";
                   cin >> num[i];
                   
                   if (num[i]>60)
                   {
                      cout << "Voce digitou um numero maior que 60. Digite novamente.\n";
                   }
                   
              } while (num[i]>60);
          }
          
          igual=0;
        
           for (i=0;i<6;i++)
           {
               for (j=i+1;j<=5;j++)
               {
                   if (num[i]==num[j])
                   {
                      igual++;
                   }
               }
           } 
               
           if (igual>0)
              cout << "\nATENCAO! Voce digitou numeros iguais. Digite a sequencia novamente.\n";   
           
     } while (igual>0);
    
    mostrar_num();

}

void mostrar_num()
{
     ordenar_num(); 
     
     cout << "\n\nVoce escolheu os seguintes numeros: \n\n";
     
     for (i=0;i<6;i++)
    {
        cout << num[i] << "   ";
    }
    
    cout << "\n\nAperte qualquer tecla para efetuar o sorteio...";
    
    getch();
    
    sorteio();
    
}

void ordenar_num()
{
     
    for (i=0;i<6;i++)
    {
        for (j=i+1;j<=5;j++)
        {
            if (num[j] < num[i])
            {
               aux=num[i];
               num[i]=num[j];
               num[j]=aux;
            }
        }
    }
} 

void sorteio()
{
     int igual;
     
     srand (time(0));
     
     do
     {
           
           for (i=0;i<6;i++) 
           {
               sort[i]=rand()%60; 
           }
     
           igual=0;
        
           for (i=0;i<6;i++) 
           {
               for (j=i+1;j<=5;j++)
               {
                   if (sort[i]==sort[j])
                   {
                      igual++;
                   }
               } 
           } 
           
     } while (igual>0);
     mostrar_sort();
     
}

void ordenar_sort()
{
     
    for (i=0;i<6;i++)
    {
        for (j=i+1;j<=5;j++)
        {
            if (sort[j] < sort[i])
            {
               aux=sort[i];
               sort[i]=sort[j];
               sort[j]=aux;
            }
        }
    }
}

void mostrar_sort()
{
     ordenar_sort();
     
     cout << "\n\nNumeros sorteados:  \n";
     
     for (i=0;i<6;i++) 
     {
         cout << sort[i] << "   ";
     }
     
     cout << "\n\nAperte qualquer tecla para ver o resultado...\n\n";
     
     getch();
     
     result();
} 

void result()
{
     int iguais[6], acertos=0, k=0;
     
     for (i=0;i<6;i++) 
     {
         for (j=0;j<6;j++) 
         {
             if (num[i]==sort[j]) 
             {
                 iguais[k]=num[i]; 
                 acertos++;
                 k++;
                 j=5;
             }
             
             if (num[i] < sort[j])
             {
                 j=5;
             }
         } 
     } 
     
     cout << "Voce teve " << acertos <<  " acerto(s): ";
     
     for (i=0;i<acertos;i++) 
     {
         cout << iguais[i] << "   ";
         
     }
     
     menu_final();
     
} 

void menu_final()
{
     char opcao;
     int a;
     
     cout << "\n\n\n1 - Digitar outra sequencia\n";
     cout << "2 - SAIR\n\n";
     
     do
     {
     a=0;
     
     cout << "Digite a sua opcao: ";
     cin >> opcao;
          
          switch (opcao)
          {
                 case'1': main();
                          break;
                 case'2': system("pause");
                 default : cout << "Opcao invalida.";
                           a++;
          }
     } while (a=1);
     
     getch();
     
} 
