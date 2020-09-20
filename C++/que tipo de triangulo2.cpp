#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
float valor1, valor2, valor3;
  
	setlocale(LC_ALL, "Portuguese");

	cout << "\n\n Insira o primeiro valor: ";
	cin >> valor1;
	cout << "\n\n Insira o segundo valor: ";
	cin >> valor2;
	cout << "\n\n Insira o terceiro valor: ";
	cin >> valor3;

    if (    (valor1 < (valor2 + valor3)) ||
            (valor2 < (valor1 + valor3)) ||
            (valor3 < valor1 + valor2))
	{
        cout << "\n\n  Os números que você inseriu nao formam um triangulo";
        return 0;
	};	// if()

    if (    (valor1 == valor2) &&
            (valor1 == valor3) &&
            (valor2 == valor3))
	{
		cout << "\n\n  Os números que você inseriu formam um equilatero";
		return 0;
	};  // if()

    if (  (valor1 == valor2) ||
          (valor1 == valor3) ||
          (valor2 == valor3))
	{
		cout << "\n\n  Os números que você inseriu formam um isosceles";
		return 0;
	};	// if()

    cout << "\n\n  Os números que você inseriu formam um escaleno\n\n\n";
    return 0;
}
