// Impressão de números reais
#include <stdio.h>
#include <conio.h>   // getch ()
 main ()
{
   float Nota1, Nota2;
   float Media;
   Nota1 = 6.6;  // Atribuição do Valores das médias
   Nota2 = 8.2;

   Media = (Nota1 + Nota2) / 2.0;

   printf("Média Final : %f", Media); 
	// No momento da execução sinal %f vai ser substituído 
	// pelo valor da variável Media com SEIS casas decimais
        // Média Final : 7.400000
   getch();      // espera que o usuário pressione uma tecla
}
