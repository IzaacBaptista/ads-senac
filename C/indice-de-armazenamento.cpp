//Lê 10 nomes e exibe o índice em que foi armazenado

#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#define NOM  10  
#define  CHAR  50   
int  buscaNome   (char  a []  [CHAR] ,  char b [],  int  n)   {
int  i,  valor,  encontrou = 0;                 
for  (i=1;  i<=n && encontrou == 0; i++)         {
if  (strcmp (a[i], b) == 0)              {
              valo r =   i;              encontrou =   1;               }
			                els e              {                     valor  =  -1;               }
							        }
									        ret ur n  valor;  }
											   main( )  {                     c har  nom e[ N OM] [CHA R],  nome 2  [CHA R] ;         
											   int  i,  i ndic e;          
											   for  (i  =  1;  i  < =  NOM;   i+ +)         {
											                 print f("\ nDi git e o  nom e  % d:   \ n" ,  i);
															                gets (nome[i] );
																			         }              pri nt f("\ n\n Digit e  um  n ome p ar a  a pes q uis a: \ n\n" );
																					          get s(nome2 );
																							                     indic e  =  busc aNom e( nom e,  nome 2,  NOM );
																												                    if (indic e  = =  -1)
