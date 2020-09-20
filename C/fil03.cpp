/* O programa cadastra pacientes que deverão fazer uma consulta com um médico.
 Ele armazena os dados dos pacientes e depois monta a ordem da consulta, 
 que é a ordem dos cadastros FIFO (First In First Out).

Para esta ideia funcionar a única coisa que foi feita e difere dos outros códigos
 é a estrutura fila, que armazena os dados da consulta (início e fim).

*/

#include <iostream>
#include <cstring>
using namespace std;
struct no
{
char nome[200];
no* next;
};
typedef no* noptr;
struct fila
{
noptr inicio;
noptr fim;
};
void insere (fila* pq, char x[])
{
noptr p;
p = new no;
strcpy(p->nome,x);
p->next = NULL;
if (pq->fim == NULL)
pq->inicio = p;
else
(pq->fim)->next = p;
pq->fim = p;
}
void remove (fila* pq, char x[])
{
noptr p;
//verificando se a fila esta vazia
if(pq->inicio == NULL)
{
cout << "Sua fila está vazia." << endl;
exit(1);
}
//removendo nó do inicio da fila
p = pq->inicio;
strcpy(x,p->nome);
pq->inicio = p->next;
//para fila vazia, os dois ponteiros apontam para NULL
if (pq->inicio == NULL)
pq->fim = NULL;
delete p;
}
int main()
{
fila q;
char name[200];
//inicializando a fila
q.inicio = NULL;
q.fim = NULL;
//inserindo elementos na fila
cout << "Entre com o nome do paciente (Digite n para sair)" << endl;
cin.getline(name,200);
while(strcmp(name,"n"))
{
insere(&q,name);
cout << "Entre com o nome do paciente (Digite n para sair)" << endl;
cin.getline(name,200);
}
//removendo os pacientes da fila
cout << endl;
cout << "A ordem de atendimento sera: " << endl;
while (q.fim != NULL)
{
remove(&q,name);
cout << name << endl;
}
system("Pause");
return 0;
}
