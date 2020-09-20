#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream> 
#include <iomanip>
#include <conio.h>
char s [50];
int i, cont = 0;
int main ()
{
	setlocale(LC_ALL, "Portuguese");


	cout<<"INDICADORES: \n";
	cout<<"\nDigite uma frase: ";
	gets(s);
	
	for (i=0; s[i]!='\0'; i++) {

    	if (s[i]=='a' || s[i]== 'e' || s[i]==' i' || s[i]=='o' || s[i]== 'u' ||
	    	s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||  s[i]=='U')	{             
		
			cont++;         
		}     
	}     
	cout<<"\nForam encontrados %d vogal(ais).", cont);      
	
	return 0;
} 

