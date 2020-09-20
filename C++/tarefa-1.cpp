
#include <iostream>
#include <iomanip>
using namespace std;
int num1, num2, soma;
main( )
{
setlocale(LC_ALL, "Portuguese");
cout<<"/n/n PROGRAMA SOMA DOS NÚMEROS  ";
cout<<" Informe o 1o numero: ";
cin>>num1;
cout<<"/n/n Informe o 2o numero: ";
cin>>num2;
soma = num1 * num2;
cout<<"/n A soma dos números é : " <<soma;
cout<<"/n/n/n";
}
