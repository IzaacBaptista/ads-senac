#include <stdio.h>
void troca (int *r, int *s) {
 int temp;
 temp = *r;
 *r = *s;
 *s = temp;
 return;
}
int main()
{
 int i, j, *p, *q;
 scanf ("%d%d", &i, &j);
 p = &i;
 q = &j;
 troca (p, q);
 printf ("%d %d\n", i, j);
 return 0;
}
