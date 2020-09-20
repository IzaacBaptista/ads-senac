#include<iostream>//BIBLIOTECA PADRÃO C++
#include<iomanip>//Para o setlocale
using namespace std;//OBRIGATÓRIO
int num1, tabuada0, tabuada1, tabuada2, tabuada3, tabuada4, tabuada5, tabuada6, tabuada7, tabuada8, tabuada9, tabuada10;
int main()
{//INICIO DO BLOCO
	setlocale(LC_ALL, "Portuguese");//TRADUÇÃO E CARACTERES ESPECIAIS
	
	cout<<"\n\n Por favor, informe a tabuada que voce deseja:   ";
	cin>>num1;
	
	tabuada0 = num1 * 0;
	tabuada1 = num1 * 1;
	tabuada2 = num1 * 2;
	tabuada3 = num1 * 3;
	tabuada4 = num1 * 4;
	tabuada5 = num1 * 5;
	tabuada6 = num1 * 6;
	tabuada7 = num1 * 7;
	tabuada8 = num1 * 8;
	tabuada9 = num1 * 9;
	tabuada10 = num1 * 10;
	
	cout<<"\n\n " <<num1 <<  " x 0  = "<< tabuada0;
	cout<<"\n\n " <<num1 <<  " x 1  = "<< tabuada1;
	cout<<"\n\n " <<num1 <<  " x 2  = "<< tabuada2;
	cout<<"\n\n " <<num1 <<  " x 3  = "<< tabuada3;
	cout<<"\n\n " <<num1 <<  " x 4  = "<< tabuada4;
	cout<<"\n\n " <<num1 <<  " x 5  = "<< tabuada5;
	cout<<"\n\n " <<num1 <<  " x 6  = "<< tabuada6;
	cout<<"\n\n " <<num1 <<  " x 7  = "<< tabuada7;
	cout<<"\n\n " <<num1 <<  " x 8  = "<< tabuada8;
	cout<<"\n\n " <<num1 <<  " x 9  = "<< tabuada9;
	cout<<"\n\n " <<num1 <<  " x 10  = "<< tabuada10;
	
	
		
	cout<<"\n\n\n";
	
	

}//FIM DO BLOCO
