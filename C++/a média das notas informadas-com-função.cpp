//[8] – FUP que receba 4 notas, devolva para o programa 
//a média das notas informadas.

#include <iostream>

using namespace std;

float nota1, nota2, nota3, nota4, media;

void medianotas();

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout<<"\n Insira a primeira nota ";
	cin>>nota1;
	cout<<"\n Insira a segunda nota ";
	cin>>nota2;
	cout<<"\n Insira a terceira nota ";
	cin>>nota3;
	cout<<"\n Insira a quarta nota ";
	cin>>nota4;
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	medianotas();
	
}

void medianotas(){
	
	cout<<"\n A média das notas informadas é: " <<media;
}
