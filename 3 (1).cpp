#include <iostream>
#include <fstream>
using namespace std;

void excluir(int numeros[], int aval){
	int i, x;
	for(i = 0; i < aval; i++){
		for(x = 0; x < aval; x++){
			if(numeros[i] == numeros[x]){
				numeros[i] = -1;
			};
		};
	};
}
void gravar(int numeros[], int aval){
	int i;
	ofstream arquivoEscrita("saida.txt");
	for(i = 0; i < aval; i++){
		if(numeros[i] != -1){
			arquivoEscrita << numeros[i] << endl;
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
	
	excluir(numeros, aval);
	
	gravar(numeros, aval);
	return 0;
}
