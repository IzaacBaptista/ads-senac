#include <stdio.h>
#include <conio.h>
main()
{
   float Nota1, Nota2;
   float Media;
 
   Nota1 = 6.6;  // Atribui��o do Valores das m�dias
   Nota2 = 8.2;

   Media = (Nota1 + Nota2) / 2.0;

   printf("Media Final : %2.2f", Media); 
	// No momento da execu��o sinal %2.2f vai ser substitu�do 
	// pelo valor da vari�vel Media
   // M�dia Final :  7.40
   getch();      // espera que o usu�rio pressione uma tecla
 }
