// Passando string para fun��o
// transforma uma palavra de min�sculo para mai�sculo
//Melhore esse programa
#include <stdio.h>
#include <ctype.h>
void maiuscula (char *s) {
 int i=0;
 while (s[i] != '\0') {
 s[i]=toupper(s[i]);
 i++;
 }
 return;
}
main()
{
 char palavra[10];
 scanf ("%s", palavra);
 maiuscula (palavra);
 printf ("%s\n", palavra);
}
