// Impress�o de n�meros reais
#include <stdio.h>
#include <conio.h>   // getch ()
 main ()
{
   float Nota1, Nota2;
   float Media;
   Nota1 = 6.6;  // Atribui��o do Valores das m�dias
   Nota2 = 8.2;

   Media = (Nota1 + Nota2) / 2.0;

   printf("M�dia Final : %f", Media); 
	// No momento da execu��o sinal %f vai ser substitu�do 
	// pelo valor da vari�vel Media com SEIS casas decimais
        // M�dia Final : 7.400000
   getch();      // espera que o usu�rio pressione uma tecla
}
