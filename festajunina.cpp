#include<iostream>
using namespace std;
struct festa{
	string nome;
	string doce, docei;
	int quantidade, quantidadei;
};

void busc(int quantidade, int listaq[], string lista[]){
	float numero;
	string vazio;
	numero = 0;
	vazio = "nada";

	for(int i = 0; i < quantidade; i++){
		for(int x = 0; x < quantidade; x++){
			if(lista[i] == lista[x]){
				numero = numero + listaq[x];
				if(x != i){
					lista[x] = vazio;
				};
			};
		};	
		if(lista[i] != vazio){
			cout << lista[i] << " " << numero << endl;
		};
		numero = 0;
	};
}

int main(){
	int aval, quantidade, i, x;
	
	cin >> aval;
	
	quantidade = aval * 2;
	festa professor[aval];
	
	string lista[quantidade];
	int listaq[quantidade];
	
	for(i = 0; i < aval; i++){
		cin >> professor[i].nome;
		cin >> professor[i].doce;
		cin >> professor[i].quantidade;	
		cin >> professor[i].docei;
		cin >> professor[i].quantidadei;
	};
	
	i = 0;
	for(x = 0; x < quantidade; x++){
			lista[x] = professor[i].doce;
			listaq[x] = professor[i].quantidade;
			x++;
			lista[x] = professor[i].docei;
			listaq[x] = professor[i].quantidadei;
		i++;
	};
		
	busc(quantidade, listaq, lista);
	return 0;
}

