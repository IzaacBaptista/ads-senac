#include<iostream>//BIBLIOTECA PADR�O C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGAT�RIO
float nota1, nota2, nota3, nota4, media, media_final;
int main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADU��O E CARACTERES ESPECIAIS
	
	cout<<"\n\n M�dia  ";
	cout<<"\n\n Insira a 1� nota: ";
	cin>>nota1;
	cout<<"\n\n Insira a 2� nota: ";
	cin>>nota2;
	cout<<"\n\n Insira a 3� nota: ";
	cin>>nota3;
	cout<<"\n\n Insira a 4� nota: ";
	cin>>nota4;
	media_final = (nota1 + nota2 + nota3 + nota4) / 4;
	if(media_final == 7) {
		cout<<"\n\n Sua m�dia � : "<<media_final<< "\n\n PARAB�NS Voc� Passou! ";
	} else {
		cout<<"\n\n Sua m�dia � : "<<media_final<< "\n\n Que pena, tente denovo ano que vem!!";
	}
	
	return 0;

}//FIM DO BLOCO
