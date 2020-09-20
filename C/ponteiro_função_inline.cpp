// Passando string para função
// transforma uma palavra de minúsculo para maiúsculo
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
