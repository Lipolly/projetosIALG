#include<iostream>
using namespace std;

void contagem(int quantidade, int aval, int v[]){
	int i, aux, posMenor;
	
	for(i = 0; i < aval-1; ++i) {
		posMenor = i;
		for(int j = i + 1; j <= quantidade; ++j) {
			if (v[j] > v[posMenor]){
				posMenor = j;
			};
		};
		aux = v[i];
		v[i] = v[posMenor];
		v[posMenor] = aux;
	};
	
	for(int x = 0; x < aval; x++){
		cout << v[x] << " ";
	};
}

int main(){
	int aval, i, quantidade;
	
	cin >> aval;

	int v[aval];
	
	for(i = 0; i < aval; i++){
		cin >> v[i];
	};
	
	cin >> quantidade;
		
	contagem(quantidade, aval, v);
	return 0;
}

int main(){
	int aval;
	string para;
	cin >> aval;
	memes meme[aval];
	leitura(meme, aval);
	ordem(meme, aval);
	cin >> para;
	busca(meme, aval, para);
	return 0;
}
