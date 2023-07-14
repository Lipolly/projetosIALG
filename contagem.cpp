#include<iostream>
using namespace std;

void contagem(int quantidade, int aval, int numeros[]){
	int i, numero, x, y;
	
	y = 0;
	x = 0;
	numero = 0;
	for(i = 0; i < aval; i++){
		for(x = 0; x < aval; x++){
			if(numeros[i] > numeros[x]){
				y = numeros[i];
				numeros[i] = numeros[x];
				numeros[x] = y;
			};
		};
	};
	for(int i = 0; i < quantidade; i++){
		numero = numero + numeros[i];
	};
	cout << numero << endl; 
}

int main(){
	int aval, i, quantidade;
	
	cin >> aval;

	int numeros[aval];
	
	for(i = 0; i < aval; i++){
		cin >> numeros[i];
	};
	
	cin >> quantidade;
		
	contagem(quantidade, aval, numeros);
	return 0;
}
