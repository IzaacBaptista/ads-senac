#include <iostream>
using namespace std;

void main()
{
 int *ptr_a;

 ptr_a = new int;
 // cria a �rea necess�ria para 01 inteiro e
 // coloca em 'ptr_a' o endere�o desta �rea.

  if (ptr_a == NULL)
  {
    cout << "Mem�ria insuficiente!" << endl;
    exit(1);
  }
  cout << "Endere�o de ptr_a: " <<  ptr_a << endl;
  *ptr_a = 90;
  cout << "Conte�do de ptr_a: " << *ptr_a << endl;
  delete ptr_a;
}
