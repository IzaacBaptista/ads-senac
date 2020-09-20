#include <stdio.h>
#include <conio.h>
main()
{
   float Nota1, Nota2;
   float Media;
 
   Nota1 = 6.6;  // Atribuição do Valores das médias
   Nota2 = 8.2;

   Media = (Nota1 + Nota2) / 2.0;

   printf("Media Final : %2.2f", Media); 
	// No momento da execução sinal %2.2f vai ser substituído 
	// pelo valor da variável Media
   // Média Final :  7.40
   getch();      // espera que o usuário pressione uma tecla
 }
