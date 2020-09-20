#include <iostream>
using namespace std;

void main()
{
 int *ptr_a;

 ptr_a = new int;
 // cria a área necessária para 01 inteiro e
 // coloca em 'ptr_a' o endereço desta área.

  if (ptr_a == NULL)
  {
    cout << "Memória insuficiente!" << endl;
    exit(1);
  }
  cout << "Endereço de ptr_a: " <<  ptr_a << endl;
  *ptr_a = 90;
  cout << "Conteúdo de ptr_a: " << *ptr_a << endl;
  delete ptr_a;
}
