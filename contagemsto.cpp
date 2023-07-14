#include<iostream>
using namespace std;
struct batalhao{
	string nome;
	string planeta;
	int bat;
};
struct reg{
	string planeta;
	float media;
	int numerostor;
};

void busc(int aval, batalhao *soldado){
	float numero, e;
	string vazio;
	numero = 0;
	e = 0;
	vazio = "nada";
	reg registro[aval];
	for(int i = 0; i < aval; i++){
		for(int x = 0; x < aval; x++){
			if(soldado[i].planeta == soldado[x].planeta){
				numero = numero + soldado[x].bat;
				e = e + 1;
				if(x != i){
					soldado[x].planeta = vazio;
				};
			};
		};
		registro[i].planeta = soldado[i].planeta;
		registro[i].media = numero / e;
		registro[i].numerostor = e;
		if(registro[i].planeta != vazio){
			cout << registro[i].planeta << " " << registro[i].numerostor << " " << registro[i].media << endl;
		};
		numero = 0;
		e = 0;
	};
}
int main(){
	int aval;
	
	cin >> aval;
	
	batalhao soldado[aval];
	
	for(int i = 0; i < aval; i++){
		cin.ignore();
		getline(cin,soldado[i].nome);
		getline(cin,soldado[i].planeta);
		cin >> soldado[i].bat;
	};
	
	busc(aval, soldado);
	return 0;
}
