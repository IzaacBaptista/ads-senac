#include <iostream>

using namespace std;

int main() {
	
	int tam=5;
	int vetor[tam];
	int i;
	
	for(i=0; i<sizeof(vetor)/4; i++){

		cout<<vetor[i] << "\n";
	}
}
