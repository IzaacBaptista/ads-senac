
#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");

	char vetor[10];
	int i, cont=0;
	for(i=0 ; i<10 ; i++){
		cout << "\nInforme uma letra(min�scula, por obs�quio): ";
		cin >> vetor[i];
		if(vetor[i]=='a'|| vetor[i]=='e'|| vetor[i]=='i'|| vetor[i]=='o'|| vetor[i]=='u'){
			cont++;
		}
	}
	cout << "\nH� " << cont <<" vogais no vetor\n\n";

	return 0;
}
