#include <iostream>
#include <fstream>
using namespace std;

void subs(int numeros[], int aval){
	int i, x;
	for(i = 0; i < aval; i++){
		for(x = i + 1; x < aval; x++){
			if(numeros[i] == numeros[x]){
				numeros[x] = -11111;
			};
		};
	};
}

int main(){
	int aval, i;
	ifstream arquivoLeitura("entrada.txt");
	arquivoLeitura >> aval;
	int numeros[aval];
	for(i = 0; i < aval; i++){
		arquivoLeitura >> numeros[i];
	};
	subs(numeros, aval);
	
	ofstream arquivoEscrita("saida.txt");
	for(i = 0; i < aval; i++){
		if(numeros[i] != -11111){
			arquivoEscrita << numeros[i] << " ";
		};
	};
	
	return 0;
}
